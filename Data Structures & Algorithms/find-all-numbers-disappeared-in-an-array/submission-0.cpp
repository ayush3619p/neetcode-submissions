class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        vector<int> hash( n+1, 0 );

        for( int i=0; i<nums.size(); i++ ){
            hash[nums[i]]++;
        }
        
        for( int num: hash ){
            cout<<num<<" ";
        }

        vector<int>ans;
       
        for( int i=1; i<hash.size(); i++ ){
            if( hash[i] == 0 ){
                ans.push_back(i);
            }
        }


        return ans;
        
    }
};