class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
           int number=target-nums[i];
            if(map.find(number)!=map.end())
            {
                return {map[number],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};