#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> num1;
        unordered_map<int,int> mp;
        int i;
        priority_queue<pair<int,int>> pq;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(unordered_map<int,int>::iterator ii=mp.begin();ii!=mp.end();ii++)
        {
            pq.push(make_pair(ii->second,ii->first));
        }
        for(i=0;i<k;i++)
        {
            num1.push_back(pq.top().second);
            pq.pop();
        }
        return num1;
    }
};

//neat code

#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(auto num:nums)
        {
            mp[num]++;
        }
        for(auto ii:mp)
        {
            pq.push({ii.second,ii.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
