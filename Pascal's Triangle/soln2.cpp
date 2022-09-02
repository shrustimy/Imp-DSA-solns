class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tr(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==0 || j==i)
                    tr[i].push_back(1);
                else
                    tr[i].push_back(tr[i-1][j-1]+tr[i-1][j]);
            }
        }
        return tr;
        
    }
};
