class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        

        int n = arr.size();
        for( int i=0; i<n-1; i++ ){
            
            int j = i+1;
            int maxp = arr[j];

            while( j < n ) {
                if( maxp < arr[j] ){
                    maxp = arr[j];
                }
                j++;
            }
            arr[i] = maxp;
        }

        arr[n-1] = -1;

        return arr;

    }
};