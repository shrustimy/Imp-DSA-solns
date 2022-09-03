// Time complexity O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),minimum=INT_MAX,maximum=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minimum)
            {
                minimum=prices[i];
            }
            if(prices[i]>minimum)
            {
                maximum=max(maximum,prices[i]-minimum);
            }
        }
        return maximum;        
    }
};


// Or

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),minimum=INT_MAX,maximum=0;
        for(int i=0;i<n;i++)
        {
            minimum=min(prices[i],minimum);
            if(prices[i]>minimum)
            {
                maximum=max(maximum,prices[i]-minimum);
            }
        }
        return maximum;        
    }
};

// Or

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),minimum=INT_MAX,maximum=0;
        for(int i=0;i<n;i++)
        {
            minimum=min(prices[i],minimum);
            maximum=max(maximum,prices[i]-minimum);
        }
        return maximum;        
    }
};
