class Solution {
public:
    int scoreOfString(string s) {

        int acitotal = 0;

        for( int i=1; i<s.size(); i++ ){

            
            acitotal += abs(static_cast<int>(s[i]) - static_cast<int>(s[i-1]));

        }

        return acitotal;
    }
};