class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int sum = 0;
        int msum = 0;

        sum+=nums[0];

        
        for( int i=1; i < nums.size(); i++ ){

            if( nums[i] <= nums[i-1] ){
                msum = max( nums[i-1], msum );  
                sum = 0;
            }

            sum+=nums[i];
            msum = max( sum, msum );
        }
        

        return msum;

    }
};