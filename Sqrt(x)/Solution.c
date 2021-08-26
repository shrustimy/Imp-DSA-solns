//My accepted solution - runtime 0ms and memory usage 5.5MB

int mySqrt(int x){
    long long l=0,r=x,mid;
    while(r>=l) //Binary search iterative method
    {
        mid=(l+r)/2;
        if(mid*mid == x)
            return mid;
        if(x>mid*mid)
            l=mid+1;
        else
            r=mid-1;
    }
    return l-1;//if the number is not a perfect square , returns the root whose square is less than the given number 
               //example: if number is 10 it returns 3 (3*3 =9 here 9<10)

}
