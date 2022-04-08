class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int si;
    KthLargest(int k, vector<int>& nums) {
        si=k;
        for(int i=0;i<nums.size();i++)
        {
            add(nums[i]);
        }
    }
    int add(int val) {
        pq.push(val);
        if(pq.size()>si)
            pq.pop();
        return pq.top();
    }
};




class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int si;
    KthLargest(int k, vector<int>& nums) {
        si=k;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(pq.size()>k)
            pq.pop();
    }
    int add(int val) {
        pq.push(val);
        if(pq.size()>si)
            pq.pop();
        return pq.top();
    }
};
