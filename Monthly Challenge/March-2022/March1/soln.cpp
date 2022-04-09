class Solution {
public:
    int dectobin(int num)
    {
        int rem,cnt=0;
        while(num)
        {
            rem=num%2;
            num=num/2;
            if(rem==1)
                cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(dectobin(i));
        }
        return ans;
    }
};
