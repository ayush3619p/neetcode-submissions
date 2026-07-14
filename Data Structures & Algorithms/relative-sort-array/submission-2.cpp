class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> hash( 1000, 0 );

        for( int i=0; i<arr1.size(); i++ ){
            hash[arr1[i]]++;
        }

        for( int i=0; i<arr2.size(); i++ ){
            
            if( find(arr1.begin(), arr1.end(), arr2[i]) != arr1.end() ){
                while( hash[arr2[i]]>0 ){
                    ans.push_back(arr2[i]);
                    hash[arr2[i]]--;
                }
            }

        }

        for( int i=0; i<hash.size(); i++ ){
            while( hash[i]>0 ){
                ans.push_back(i);
                hash[i]--;
            }
        }

        return ans;

       
    }
};