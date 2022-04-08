// This solution takes maximum time
#include<algorithm>
class KthLargest {
public:
    vector<int> nums1;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth=k;
        for(int i=0;i<nums.size();i++)
        {
            nums1.push_back(nums[i]);
        }
    }
    int add(int val) {
        nums1.push_back(val);
        sort(nums1.begin(),nums1.end());
        return nums1[nums1.size()-kth];
    }
};
