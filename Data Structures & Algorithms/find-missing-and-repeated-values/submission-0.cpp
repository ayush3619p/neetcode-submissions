class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int s = n*n + 1;

        vector<int> ans(2, 0);

        vector<int>hash( s, 0 );

        for( vector num : grid ){
            for( int n : num ){
                hash[n]++;
            }
        }

        for( int it : hash ){
            cout<<it<<" ";
        }

        for( int i=1; i<hash.size(); i++ ){
            if( hash[i] >= 2 ){
                ans[0] = i;
            }
            if( hash[i] == 0 ){
                ans[1] = i;
            }
        }


        return ans;
    }
};