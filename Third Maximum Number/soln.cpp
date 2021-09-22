class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=nums[nums.size()-1];
       for(int i=nums.size()-1;i>0;i--)
       {
           if(nums[i]!=nums[i-1]) // if elements are not repeated then increase the count
           {
               cnt++;
           }
           if(cnt==3)
               return nums[i-1]; // returns third largest element
       }
        
        return maxi; // if all elements are repeated(Ex: [2,2,2,2]) or any one element is repeated(Ex: [1,2,2,2]) in such cases count won't be equal to 3 , then return the maximum number(as maximum number in sorted array will be last number) 
    }
};