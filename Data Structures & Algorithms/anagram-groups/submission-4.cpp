class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector< vector< string >> ans;
        unordered_map< string, vector<string>> ump;

        for( string x : strs ){

            vector<int> hash( 26, 0 );
            for( char ch : x ){
                hash[ ch -'a' ] ++;
            }

            string key = to_string(hash[0]);

            for( int i=1; i<hash.size(); i++ ){
                key+= ',' + to_string(hash[i]);
            }

            ump[key].push_back(x);

        }

        for(const auto& [key, val] : ump ){
            ans.push_back(val);
        }

        return ans;

    }
};
