class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int sp=n/2;
            for(int i=0,j=n-1;i<sp;i++,j--)
            {
                swap(s[i],s[j]);
            }  
    }
};
