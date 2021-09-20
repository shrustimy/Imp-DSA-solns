class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1,maxi=INT_MIN;
        if(nums.size()<=1)
            return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            product*=nums[i];
            maxi=max(maxi,product);
            if(product==0)
                product=1;
        }
        product=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            product*=nums[i];
            maxi=max(maxi,product);
            if(product==0)
                product=1;
        }
        return maxi;
    }
};