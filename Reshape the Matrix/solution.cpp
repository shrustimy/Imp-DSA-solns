// It's Time complexity is O(r*c)

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> arr(r, vector<int>(c));
        vector<int> v;
        int n= (mat.size())*(mat[0].size()),cnt=0;
        if((r*c)!=n) // if number of elements in the mat is not equal to the no. of elements in the matrix to be formed(to be reshaped), it's not possible to reshape it so return mat
            return mat;
        else{
            for(int i=0;i<mat.size();i++) // stores all the elements of mat in vector v
            {
                for(int j=0;j<mat[0].size();j++)
                {
                    v.push_back(mat[i][j]);
                }
            }
            for(int i=0;i<r;i++)//stores the values of v into 2D vector, according to the given values of r and c 
            {
                for(int j=0;j<c;j++)
                {
                    arr[i][j]=v[cnt];
                    cnt++;
                }
            } 
              
        }
            
     return arr; 

    }
};