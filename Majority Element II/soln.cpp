class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> arr;
        int n=nums.size();
        for(int i:nums)
        {
            if(++m[i]>(n/3))
            {
                if(find(arr.begin(),arr.end(),i) == arr.end()) // if element is not present in arr , then push it
                arr.push_back(i);
            }
        }
       return arr; 
    }
};