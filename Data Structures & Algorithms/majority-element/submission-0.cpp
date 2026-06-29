class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort( nums.begin(), nums.end() );
        int s = nums[nums.size() - 1];

        vector< int > hash( s+1, 0 );

        for( int i=0; i<nums.size(); i++ ){    
            hash[nums[i]]+=1; 
        }

        int ans = 0;
        int ele = 0;
        for( int i=0; i<hash.size(); i++ ){
            if( hash[i] > ans ){
            ans = max( ans, hash[i] );
            ele = i;
            }

        }


        return ele;
        
    }
};