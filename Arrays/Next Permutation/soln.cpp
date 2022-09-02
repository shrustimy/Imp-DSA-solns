// We can use next_permutation function already present in C++ file #include<algorithm>

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};
