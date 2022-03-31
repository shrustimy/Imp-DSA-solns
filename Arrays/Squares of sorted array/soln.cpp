class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=0;
        for(int i:nums)
        {
            nums[j++]=i*i;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
