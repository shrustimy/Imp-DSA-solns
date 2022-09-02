class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        while(mid<=high)
        {
            if(nums[mid]<1)
                swap(nums[mid++],nums[low++]);
            else if(nums[mid]>1)
                swap(nums[mid],nums[high--]);
            else
                mid++;
        }
        
    }
};


// Or

class Solution {
public:
     void sortColors(vector<int>& nums) {
         int n=nums.size(),mid=0,low=0,high=n-1;
         while(mid<=high)
         {
             if(nums[mid]==0)
             {
                 swap(nums[low],nums[mid]);
                 mid++;
                 low++;
             }
             else if(nums[mid]==1)
                 mid++;
             else if(nums[mid]==2)
             {
                 swap(nums[mid],nums[high]);
                 high--;
             }
         }
         
    }
        
};
