class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int cnt[101] = {0};

        vector< int > expected;

        for( int i=0; i<heights.size(); i++ ){
            cnt[heights[i]] ++;
        }

        for( int num : cnt ){
            cout<<num<<" ";
        }

        for( int i=0; i<101; i++ ){      
            int chk = cnt[i];        
            for( int j=chk; j>0; j-- ){
                expected.push_back(i);
            }
        }

        int cntr = 0;

        for( int i=0; i<heights.size(); i++ ){

            if( heights[i] != expected[i] ){
                cntr++;
            }

        }

        return cntr;

    }
};