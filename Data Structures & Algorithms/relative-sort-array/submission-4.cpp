class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        map<int, int> hash;

        for( int i=0; i<arr1.size(); i++ ){
            hash[arr1[i]]++;
        }


        for( int i=0; i<arr2.size(); i++ ){
            
            if (hash.find(arr2[i]) != hash.end()){
                while( hash[arr2[i]]>0 ){
                    ans.push_back(arr2[i]);
                    hash[arr2[i]]--;
                }
            }

        }

        for( auto& [key, val] : hash ){
            while( val > 0 ){
                ans.push_back(key);
                hash[key]--;
            }
        }

        return ans;

       
    }
};