//Time complexity O(logn)     , Runtime 4ms
// using two iterative binary searches
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid,res=-1;
        vector<int> v(2,-1);
        if(nums.size()==0)
            return v;
        while(l<=r)   // First loop to find the first position of target
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                res=mid;
                r=mid-1;
            }
            else if(target<nums[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        v[0]=res;/* if element is not found -1 is inserted into v[0]  or else we can write this if(res==-1)  
                                                                                                    return v;  if element is not present , then return {-1,-1}*/
        res=-1;
        l=0;
        r=nums.size()-1;
        while(l<=r)  // Second loop to find the last position of target
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                res=mid;
                l=mid+1;
            }
            else if(target<nums[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        v[1]=res;
        return v;
        
    }
};