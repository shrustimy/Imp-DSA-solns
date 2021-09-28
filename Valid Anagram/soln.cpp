class Solution {                //12ms
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1,m2;
        if(s.size()!=t.size())
            return false;
        for(auto i:s)
        {
            m1[i]++;
        }
        for(auto i:t)
        {
            m2[i]++;
        }
        for(auto i:s)
        {
            if(m1[i]!=m2[i])
                return false;
        }
        return true;
    }
};

//other way: using two for loops   // 12ms

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1,m2;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto i:s)
        {
            if(m1[i]!=m2[i])
                return false;
        }
        return true;
    }
};

//method2 8ms

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto i:s)
        {
            if(m[i])  //if m[i] is not equal to zero , it's not an anagram
                return false;
        }
        return true;
    }
};

//method3 16ms - using sort function

class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
        return s==t;
    }
};