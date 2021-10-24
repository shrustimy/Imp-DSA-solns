class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        int col=1;
        a[0]=vector<int>(col);
        a[0][0]=1;
        for(int i=1;i<numRows;i++)
        {
                a[i]=vector<int>(i+1);
                a[i][0]=1;
                a[i][i]=1;
            for(int j=1;j<=i-1;j++)
            {
                 a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
       return a; 
    }
};
