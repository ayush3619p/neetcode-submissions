class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<int>hash;
        int l = 0;
        int r = 0;
        int mlen =  0;

        while( r < s.size() ){

            while( hash.count(s[r]) ){
                hash.erase( s[l] );
                l++;
            }
            
            hash.insert( s[r] );
            mlen = max( mlen, r-l+1 );
            r++;
        }

        return mlen;
        
    }
};
