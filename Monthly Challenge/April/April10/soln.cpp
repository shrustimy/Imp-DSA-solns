#include<string>
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> ans;
        int j=0,sum=0;
        for(string st:ops)
        {
            if(st=="+"){
                ans.push_back(ans[j-1]+ans[j-2]);
                j++;
            }
            else if(st=="D"){
                ans.push_back(ans[j-1]*2);
                j++;
            }
            else if(st=="C"){
                ans.pop_back();
                j--;
            }
            else
            {
                int num1=stoi(st);
                ans.push_back(num1);
                j++;
            }
        }
        for(int num:ans)
        {
            sum=sum+num;
        }
        return sum;      
    }
};
