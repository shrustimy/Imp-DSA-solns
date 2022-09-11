vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long n=A.size();
    vector<int> temp(n+1,0),ans(2);
    for(long i=0;i<n;i++)
    {
        temp[A[i]]++;
        if(temp[A[i]]>1)
        ans[0]=A[i];
    }
    for(long i=1;i<=n;i++)
    {
        if(temp[i]==0)
        ans[1]=i;
    }
    return ans;
}
