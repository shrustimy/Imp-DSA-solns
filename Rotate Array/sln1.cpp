class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums);
        int j=0,n=nums.size();
        if(k==n)
         return;
        k=k%n;
        for(int i=(n-k);i<n;i++)
        {
            nums[j]=arr[i];
            j++;
        }
        for(int i=0;j<n;j++,i++)
        {
            nums[j]=arr[i];
        }
            
        
    }
};