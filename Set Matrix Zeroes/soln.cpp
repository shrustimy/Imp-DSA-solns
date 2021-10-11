class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<int> ar,ac;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    ar.push_back(i);
                    ac.push_back(j);
                }
            }
        }
        for(int i=0;i<ar.size();i++)
        {
            int a=ar[i],b=ac[i];
            for(int j=0;j<col;j++)
            {
                if(matrix[a][j]!=0)
                matrix[a][j]=0;
                  
            }
            for(int j=0;j<row;j++)
            {
                if(matrix[j][b]!=0)
                matrix[j][b]=0;
            }
        }
        
    }
};