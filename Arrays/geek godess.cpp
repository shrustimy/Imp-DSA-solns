int main(int argc, char *a[])
{
    //Write code here
    int cases;
    cin>>cases;
	while(cases--)
	{
		int M,N;
        long num,sum1=0,sum2=0,diff=0,sum=0;
        vector<long> arr;
		cin>>N;
		cin>>M;
		for(int i=0;i<N;i++)
        {
            cin>>num;
            arr.push_back(num);
      sum+=num;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<M;i++)
        {
            sum1+=arr[i];
        }
        for(int i=M;i<N;i++)
        {
            sum2+=arr[i];
        }
    right=sum-sum1;
    right1=sum-sum2;
        diff=max(right,right1);
        cout<<diff<<endl;

	}
}
