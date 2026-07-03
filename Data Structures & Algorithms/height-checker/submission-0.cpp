class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int>comp = heights;
 
        sort( comp.begin(), comp.end() );

        int ctr = 0;

        for( int i=0; i<comp.size(); i++ ){
            if( comp[i]!=heights[i] ){
                ctr++;
            }
        }


        return ctr;
        
    }
};