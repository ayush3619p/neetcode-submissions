class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set< int > hash;
        int l = 0;
        int maxi = 0;
        

        for( int i=0; i<s.size(); i++ ){

            while( hash.count( s[i] ) ){
                hash.erase(s[l]);
                l++;
            }

            hash.insert(s[i]);
            maxi = max( maxi, i - l + 1 );

        }
        return maxi;
        
    }
};
