// But this method modifies the array

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])]>0)
                nums[abs(nums[i])]=-nums[abs(nums[i])];
            else
                return abs(nums[i]);
        }
        return -1;
    }
};
