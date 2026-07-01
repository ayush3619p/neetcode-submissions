class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        vector<int> v( flowerbed.size() + 2, 0 );
        int ctr =0;

        for( int i = 0; i< flowerbed.size(); i++  ){
            v[ i+1 ] = flowerbed[i];
        }

        for( int i = 1; i< v.size()-1; i++ ){
            if( v[i-1] == 0 && v[i] == 0 && v[i+1] == 0 ){
                ctr++;
                i++;
            }
        }

        cout<<ctr;

        return ctr>=n;
    }
};