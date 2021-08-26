int searchInsert(int* nums, int numsSize, int target){
   int cnt=0;
    
    for(int i=0;i<numsSize;i++)
    {
        
        if(nums[i]==target)
            return i;
        if(nums[i]!=target)
            cnt++;
    }
    if(cnt==numsSize)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(i==numsSize-1 && target>nums[i])
                return i+1;
            else if(target<nums[i])
            {
                return i;
                i=numsSize-1;
            }
            
        }
    }
    return;

}