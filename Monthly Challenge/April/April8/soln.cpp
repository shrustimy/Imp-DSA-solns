// This solution is giving error while submitting but it's not giving error while testing "for the same testcase" if anybody know what's wrong with the code please correct it.

#include<algorithm>
vector<int> nums1;
int cnt=0,kth;
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums1.push_back(nums[i]);
        }
        nums1.push_back(k);
    }
    int add(int val) {
        if(cnt==0)
        {
            kth=nums1.back();
            nums1.pop_back();
            cnt++;
        }
        nums1.push_back(val);
        sort(nums1.begin(),nums1.end());
        return nums1[nums1.size()-kth];
    }
};
