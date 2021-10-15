class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int s=nums[0];
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            s+=nums[i];
            sum.push_back(s);
        }
        return sum;
    }
};