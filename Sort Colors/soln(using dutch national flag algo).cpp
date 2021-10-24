class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,i=0;
        while(i<=high)
        {
            if(nums[i]<1)
                swap(nums[i++],nums[low++]);
            else if(nums[i]>1)
                swap(nums[i],nums[high--]);
            else
                i++;
        }
        
    }
};
