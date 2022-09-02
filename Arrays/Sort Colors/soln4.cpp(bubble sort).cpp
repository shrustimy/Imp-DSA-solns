// using Bubble sort algorithm
class Solution {
public:
     void sortColors(vector<int>& nums) {
         int n=nums.size();
         for(int i=n-1;i>=0;i--)
         {
             for(int j=0;j<i;j++)
             {
                 if(nums[j+1]<nums[j])
                     swap(nums[j+1],nums[j]);
             }
         }
    }
        
};
