class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=0,Sum=0,n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            Sum+=nums[i];
            if(i!=n-1 && nums[i]>=nums[i+1])
            {
               maxSum=max(Sum,maxSum);
                Sum=0;
            }
            maxSum=max(Sum,maxSum);
        }
        return maxSum;
        
    }
};