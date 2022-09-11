class Solution {
public:
    static bool sortcol(const vector<int>& v1,const vector<int>& v2) { 
     return v1[0] < v2[0]; 
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),sortcol);
        for(int i=0;i<intervals.size()-1;i++)
        {
            if((intervals[i][1]>=intervals[i+1][0]))
            {
                if(intervals[i][1]<=intervals[i+1][1])
                    intervals[i][1]=intervals[i+1][1];
                for(int j=i+1;j<intervals.size()-1;j++)
                {
                    intervals[j][0]=intervals[j+1][0];
                    intervals[j][1]=intervals[j+1][1];
                }
                intervals.erase(intervals.begin()+intervals.size());
                i--;
            }
        }
        return intervals;
        
    }
};
