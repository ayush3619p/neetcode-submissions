class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector< vector<string>> ans;
        unordered_map< string, vector<string> > ump;

        for( string s : strs ){

            vector<int>hash( 26, 0 );
            for( char it: s ){
                hash[it-'a']++;
            }

            string key = to_string( hash[0] );

            for( int i=1; i<hash.size(); i++ ){
                key+= "," + to_string(hash[i]);
            }

            ump[ key ].push_back(s);

        }

        for( const auto& s : ump ){
            ans.push_back(s.second);
        }

        return ans;

    }
};
