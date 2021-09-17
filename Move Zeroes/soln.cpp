class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0,n=nums.size(),j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                cnt++;
            else
            {
              nums[j++]=nums[i];
            }
        }
        for(int i=0;i<cnt;i++)
        {
            nums[j++]=0;
        }
        
    }
};