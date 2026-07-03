class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map< int, int >ump;
        vector< vector<int>> bucket( n+1 );
        vector<int>ans;

        for( int num : nums ){
            ump[num]++;
        }

        for( auto [key, val] : ump ){
            bucket[val].push_back(key);
        }

        for( int i=bucket.size()-1; i>=0; i-- ){
             if(!bucket[i].empty()) {
                for(int num : bucket[i])
                {
                    ans.push_back(num);

                    if(ans.size() == k)
                    return ans;
                }
            }
        }

        
    }
};
