class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> m;
      //  unordered_map<string,int> m1;
        string str;
        int cnt=1;
        istringstream word(s);
        vector<string> val;
        while(word >> str )
            val.push_back(str);
        if(pattern.size()!=val.size())
            return false;
        for(int i=0;i<val.size();i++)
        {
            m[pattern[i]]=val[i];
            if( i!=0 && val[i]==val[i-1])
                cnt++;
        }
        for(int i=0;i<val.size();i++)
        {
            if(m[pattern[i]]!=val[i] || (cnt==val.size() && val.size()!=1) )
                return false;
        }
       return true; 
    }
};