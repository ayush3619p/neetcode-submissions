class Solution {
public:
    int maxDifference(string s) {

        map< char, int> hash;

        for( char ch : s ){
            hash[ch]++;
        }

        for( auto& [key, val] : hash ){
            cout<<key<<":"<<val<<" ";
        }

        int maxiodd = INT_MIN;
        int maxieven = INT_MAX;

        for( auto& [key, val] : hash ){
            
            if( val%2 != 0 ){
                maxiodd = max( maxiodd, val );
            }

            if( val%2 == 0 ){
                maxieven = min( maxieven, val );
            }

        }

        
        int diff = maxiodd - maxieven;

        return diff;
        
    }
};