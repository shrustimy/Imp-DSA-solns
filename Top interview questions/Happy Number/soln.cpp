#include<unordered_map>
class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> duplicate;
        int num=0,sum=0;
        while(num!=1)
        {
            while(n!=0)
            {
                sum+=(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
            num=sum;
            if(++duplicate[sum]>1)
                return false;
            sum=0;   
        }
            return true; 
    }
};
