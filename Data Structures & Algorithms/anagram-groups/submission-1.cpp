class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map< string, vector<string>> res;

        for( const auto& s : strs ){

            vector<int> hash( 26, 0);
            for( char c : s ){
                hash[ c - 'a']++;
            }
            
            string key = to_string(hash[0]);
            for( int i=1; i<26; i++ ){
                key += "," + to_string(hash[i]);
            }

            res[key].push_back(s);
        }
        //unorderd_map bangaya

        vector< vector<string>> ans;

        for( auto& s : res ){
            ans.push_back( s.second );
        }
        return ans;

    }
};
