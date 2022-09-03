// We can't use another 2D matrix but this is one of the approaches

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> duplicate=matrix;
        int n=matrix.size();
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            for(int k=0;k<n;k++)
            {
                duplicate[k][j]=matrix[i][k];
            }
        }
        matrix=duplicate;
    }
};
