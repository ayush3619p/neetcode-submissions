class Solution {
public:

bool isAnagram(string s, string t) {
    
    if( s.size() != t.size() ){
        return false;
    }

    vector<int> hash( 26, 0 );

    for( char ch : s ){
        hash[ ch - 'a' ] ++;
    }

    for( char ch : t ){
        hash[ ch - 'a' ] --;
    }

    for( int num : hash ){
        cout<<num<<" ";
    }

    for( int i=0; i<hash.size(); i++ ){
        if( hash[i] != 0 ){
            return false;
        }
    }

    return true;

}

};
