// Time taken to execute 4ms
int searchInsert(int* nums, int numsSize, int target){
    int l=0,r=numsSize-1,mid,cnt;
    while(l<=r)  //Binary search iterative method
    {
        mid=(l+r)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[mid]>target)
            r=mid-1;
        else
            l=mid+1;
    }
    cnt=-1;    // if we reach here, then element was not present
    if(cnt==-1)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(i==numsSize-1 && target>nums[i])//if the target is greater than the element at the last position returns the next  
                return i+1;    // position of the last element ,here loop terminates as the value of i becomes greater than numsSize
            else if(target<nums[i]) //if target is less than the element ,returns the position of that element and value of i is updated
            {                       //to last position so that i value increments and the loop terminates.
                return i;
                i=numsSize-1;
            }
            
        }
    }
    return;

}