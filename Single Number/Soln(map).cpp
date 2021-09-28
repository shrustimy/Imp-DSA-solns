class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums)
        {
            map[i]++;
        }
        for(auto i:nums)
        {
            if(map[i]==1)
                return i;
        }
        return -1;
    }
};