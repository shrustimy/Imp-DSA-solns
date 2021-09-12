//Runtime 3ms

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=0,Sum=0,n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            Sum+=nums[i];
            if(i!=n-1 && nums[i]>=nums[i+1]) // we check i!=n-1 to avoid array index out of bound
            {
               maxSum=max(Sum,maxSum);
                Sum=0;
            }
            maxSum=max(Sum,maxSum);
        }
        return maxSum;
        
    }
};


//Another type , Runtime 6ms

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=0,Sum=0,n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            Sum+=nums[i];
            maxSum=max(Sum,maxSum);
            if(i!=n-1 && nums[i]>=nums[i+1])
            {
                Sum=0;
            }
            
        }
        return maxSum;
        
    }
};
