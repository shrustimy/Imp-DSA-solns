class Solution {
public:
    bool isPalindrome(int x) {
        long reverse_num=0, num=x;
        if(x<0)
        return false;
        while(x!=0){
            reverse_num=reverse_num*10+(x%10);
            x=x/10;
        }
        if(reverse_num==num)
          return true;
        return false;
    }
};
