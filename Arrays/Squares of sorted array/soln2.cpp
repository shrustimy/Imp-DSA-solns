#include<stack>
#include<vector>
#include<cstdlib>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> num1;
        int i,a=nums.size();
        stack<int> st;
        if(a==1){
            num1.push_back(nums[0]*nums[0]);
            return num1;
        }
        for(i=0;i<nums.size();i++)
        {
           if(nums[i]<0)
               st.push(abs(nums[i]));
            else
                break;
        }
        if(i>=a)
        {
            while(!st.empty())
            {
                num1.push_back(st.top()*st.top());
                st.pop(); 
            }
        }
        else{
        for(int j=0;j<a && st.empty()==false;j++)
        {
            if(i<a){
                if(st.top()<=nums[i])
                {
                num1.push_back(st.top()*st.top());
                st.pop();
                }
            else{
                num1.push_back(nums[i]*nums[i]);
                i++;
            }
            }
            else
                break;
        }
        if(st.empty())
        {
            while(i<a)
            {
                num1.push_back(nums[i]*nums[i]);
                i++;
            }
        }
            else{
                while(!st.empty())
               {
                num1.push_back(st.top()*st.top());
                st.pop(); 
               }
            }
        }
        return num1;
    }
};
