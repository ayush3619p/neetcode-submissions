class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map< int, int >ump;
        priority_queue< pair< int, int> > pq;
        vector<int>ans;

        for( int num : nums ){
            ump[num]++;
        }

        for( auto [ key, val] : ump ){
            pq.push( {val, key} );
        }

        for( int i=0; i<k; i++ ){
            ans.push_back( pq.top().second );
            pq.pop();
        }

        return ans;
        
    }
};
