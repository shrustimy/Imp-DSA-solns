// Time limit exceeds but this is also one approach with time complexity O(n^2)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),currSum=0,maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currSum=0;
            for(int j=i;j<n;j++)
            {
                currSum+=nums[j];
                maxSum=max(currSum,maxSum);
            }
        }
        return maxSum;
    }
};
