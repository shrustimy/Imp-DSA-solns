#include<algorithm>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0]; 
        int dif;
        while(true){
            sort(stones.begin(),stones.end());
            dif=stones[stones.size()-1]-stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(dif!=0)
                stones.push_back(dif);
            if(stones.size()==1)
                return stones[0];
            else if(stones.size()==0)
                return 0;
            }
        
    }
};
