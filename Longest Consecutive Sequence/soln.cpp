// Time complexity O(nlogn)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int count=1,maxi=1; // there will be atleast one number if there are no consecutive numbers Ex: here [1,10,13,25] count                                           //will be 1
        for(int i=0;i<nums.size()-1;i++)
        {
            // if there are any duplicates, they will be neglected and i value will be incremented
            if(nums[i]!=nums[i+1]) 
            {
            if(nums[i]==nums[i+1]-1) // if diff between curr numb and it's next numb is 1 , counter will be incremented
            {
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=1;
            }
            }
        }
        return maxi;
        
    }
};