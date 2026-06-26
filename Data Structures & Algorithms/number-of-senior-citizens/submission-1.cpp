class Solution {
public:
    int countSeniors(vector<string>& details) {

        int ctr = 0;
        
        for( const auto& it : details ){

            if( stoi(it.substr( 11, 2 )) > 60 ){
                ctr++;
            }

        }
        return ctr;

    }
};