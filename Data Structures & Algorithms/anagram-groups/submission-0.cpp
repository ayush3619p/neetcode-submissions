class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map< string, vector<string>> res;

        for( const auto& s : strs ){

            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);

        }

        //unorderd_map bangaya

        vector< vector<string>> ans;

        for( auto& s : res ){
            ans.push_back( s.second );
        }
        return ans;

    }
};
