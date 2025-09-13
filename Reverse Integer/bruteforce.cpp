// Time complexity: O(d log(d)) Space complexity: O(d) where d is the number of digits in the input x

#include<vector>
#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        vector<int> vec;
        int count=0;
        long int reverse_num=0,rem=0;
        while(x!=0)
        {
            vec.push_back(x%10); // Store the digits in the vector
            x=x/10;
        }
        count=vec.size()-1;
        for(int num:vec){
           rem=num*pow(10,count); 
           reverse_num+=rem; // Computation to place the digits based on the their place value
           if(reverse_num>INT_MAX || reverse_num<INT_MIN) // Check if the reverse number doesnot exceed the limit of integer value
           return 0;
           count--;
        }
        return reverse_num;
    }
};
