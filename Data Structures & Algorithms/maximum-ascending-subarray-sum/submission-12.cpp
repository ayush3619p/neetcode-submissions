class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int sum = 0;
        int msum = 0;

        sum+=nums[0];

        
        for( int i=1; i < nums.size(); i++ ){

            if( nums[i-1] >= nums[i] ){
                sum = 0;
                msum = max( msum, nums[i-1] );
            }
            sum+= nums[i];
            msum = max( msum, sum );
           
        }
        msum = max( msum, sum );
    
        return msum;

    }
};