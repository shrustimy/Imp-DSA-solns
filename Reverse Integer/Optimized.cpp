#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        long int reverse_num=0;
        while(x!=0)
        {
            reverse_num=(reverse_num*10)+(x%10);
            if(reverse_num>INT_MAX || reverse_num<INT_MIN)
            return 0;
            x=x/10;
        }
        return reverse_num;
    }
};
