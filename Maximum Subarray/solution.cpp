//Runtime 7ms
//Here Kadane's algorithm is used , Time complexity O(n)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN,currSum=0,size=nums.size();
        if(size==1)
        {
            return nums[0];
        }
        else
        {
        for(int i=0;i<size;i++)
        {
            currSum+=nums[i];
            if(currSum<0)
                currSum=0;
            maxSum=max(maxSum,currSum);
        }
        if(maxSum==0)  //This will be true, if all the elements of the vector are negative
        {
            sort(nums.begin(),nums.end());
            maxSum=nums[size-1];
        }
        }
        return maxSum;
    }
};