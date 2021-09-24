class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i:nums)
        {
            s.insert(i);
        }
        nums.clear();
        for(int value:s)
            nums.push_back(value);
        return s.size();
    }
};