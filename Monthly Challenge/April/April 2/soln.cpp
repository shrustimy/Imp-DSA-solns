class Solution {
public:
    bool shift(int i,int n,string s,int j){
        int k=j;
        string sk=s;
        bool val;
        for(;i<n;i++)
        {
            s[i]=s[i+1];
        }
        for(i=0,j=n-2;i<(n-1)/2;i++,j--)
        {
            if(s[i]==s[j])
                val=true;
            else
            {
                val=false;
                break;
            }
        }
        if(val==false)
        {
        for(;k<n;k++)
        {
            sk[k]=sk[k+1];
        }  
        for(i=0,j=n-2;i<(n-1)/2;i++,j--)
        {
            if(sk[i]==sk[j])
                val=true;
            else
            {
                val=false;
                break;
            }
        } 
        }
        return val;
        
    }
    bool validPalindrome(string s) {
        bool value;
        int n=s.size(),i,j;
        for(i=0,j=n-1;i<(n/2);i++,j--)
        {
            if(s[i]!=s[j]){
                value=shift(i,n,s,j);
                break;
            }
        }
        if(i==n/2 && s[i]==s[j])
            return true;
        return value;

    }
};
