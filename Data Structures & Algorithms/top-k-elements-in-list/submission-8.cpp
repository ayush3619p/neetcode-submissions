class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map< int, int >ump;
        vector< int > ans;

        for( int num : nums ){
            ump[num]++;
        }

        for( int i=0; i<k; i++ ){

            int maxFreq = 0;
            int maxKey = 0;

                for( auto [ key, val ] : ump ){
                    if( maxFreq < val ) {
                        maxFreq = val;
                        maxKey = key;
                    }
                }
            
            ans.push_back(maxKey);
            ump.erase(maxKey);

        }

        return ans;
        
    }
};
