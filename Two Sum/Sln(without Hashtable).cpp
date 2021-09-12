class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> index;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]+nums[j]==target)
                    {  
                    index.push_back(i);
                    index.push_back(j);
                    break;
                    }
            }
        }
        return index;
    }
};