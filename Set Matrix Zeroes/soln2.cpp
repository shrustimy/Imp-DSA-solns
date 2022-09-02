// using hash table
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size(),columns=matrix[0].size();
        unordered_map<int,int> rowv,columnv;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowv[i]++;
                    columnv[j]++;
                }
            }
        }
        for(int i=0;i<rows;i++)
        {
            if(rowv[i]>=1){
            for(int j=0;j<columns;j++)
            {
                if(matrix[i][j]!=0)
                    matrix[i][j]=0;
            }
            }
        }
        
        for(int i=0;i<columns;i++)
        {
            if(columnv[i]>=1){
            for(int j=0;j<rows;j++)
            {
                if(matrix[j][i]!=0)
                    matrix[j][i]=0;
            }
            }
        }
        
    }
};
