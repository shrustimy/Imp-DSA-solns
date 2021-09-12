//Solution without using Hash Table , Binary Search and Sorting   
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        vector<int> a;
        for(int i=0;i<size1;i++)
        {
            for(int j=0;j<nums2.size();j++)//once we erase the element nums2 size will be automatically updated to new size
            {
                if(nums1[i]==nums2[j]) // once the same element is found in both the array, push it into new array delete that element in nums2 and exit from the inner loop 
                {
                    a.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+j);
                    break;
                }
            }
        }
        return a;
        
    }
};