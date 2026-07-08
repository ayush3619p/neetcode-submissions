class Solution {
public:
    bool isPalindrome(string s) {
        
        for( int i=0; i<s.size(); i++ ){
            if( !isalnum(s[i]) ){
                s.erase(i,1);
            }
        }

        s.erase( remove( s.begin(), s.end(), ' '), s.end() );

        for( auto& x : s ){
            x = tolower(x);
        }

        int i=0;
        int j=s.size() - 1;

        cout<<s;

        while( i<j ){
            if( s[i] != s[j] ){
                
                return false;
            }
            i++;
            j--;
        }


        return true;

    }
};
