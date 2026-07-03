class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int>hash( 101, 0 );
        vector<int>comp;

        for( int i=0; i<heights.size(); i++ ){
            hash[heights[i]]++;
        }

        for( int i=0; i<hash.size(); i++ ){

            while( hash[i] != 0 ){
                comp.push_back(i);
                hash[i]--;
            } 

        }
        int ctr = 0;

        for( int i=0; i<heights.size(); i++ ){
            if( comp[i] != heights[i] ){
                ctr++;
            }
        }



        return ctr;
        
    }
};