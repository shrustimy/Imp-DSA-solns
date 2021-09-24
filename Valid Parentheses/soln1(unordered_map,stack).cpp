class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> symbols={{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(symbols[s[i]]<0)
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                char top=st.top();
                st.pop();
                if(symbols[top]+symbols[s[i]] !=0)
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};