#include<algorithm>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j=0;
        vector<int> temp=nums;
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]==0)
            nums[j++]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]==1)
            nums[j++]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]==2)
            nums[j++]=2;
        }
    }
        
};
