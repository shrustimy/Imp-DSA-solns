// Time limit exceeds because of O(n^2) time complexity but one of the approaches for the problem

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),maximum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(prices[i]<prices[j])
                    maximum=max(maximum,prices[j]-prices[i]);
            }
        }
        return maximum;
    }
};
