//using XOR operation

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
           nums[0]^=nums[i]; //since XOR is commutative and XOR of two same numbers is zero , so the left over element is the non-repeated one
        }
        return nums[0];
    }
};