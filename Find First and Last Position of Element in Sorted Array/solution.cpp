//using lower_bound and upper_bound

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>::iterator lower,upper;
        vector<int> nums1={-1,-1};
        if(nums.size()==0)
            return nums1;
        lower=lower_bound(nums.begin(),nums.end(),target);
        if(lower==nums.end() || *lower!=target )
        {
            return nums1;
        }
        else{
            upper=upper_bound(nums.begin(),nums.end(),target);
            nums1[0]=lower-nums.begin();
            nums1[1]=upper-nums.begin()-1;
        }
        return nums1;
    }
};
