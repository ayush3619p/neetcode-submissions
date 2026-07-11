class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     
     sort( strs.begin(), strs.end() );

     for( int i=0; i<strs.size(); i++ ){
        cout<<strs[i]<<" ";
     }
     int n = strs.size() -1;
     int j = 0;
     for( int i=0; i<strs[0].size(); i++ ){

        if( strs[0][i] == strs[n][i] ){
            j++;
        }else{
            break;
        }

     }
     strs[0] = strs[0].substr( 0,j );

     return strs[0];

    }
};