#include<algorithm>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) { 
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1)
        {
            int m=pq.top();
            pq.pop();
            int n=pq.top();
            pq.pop();
            if(m>n)
                pq.push(m-n);
        }
        return (pq.empty()) ? 0:pq.top();   
    }
};
