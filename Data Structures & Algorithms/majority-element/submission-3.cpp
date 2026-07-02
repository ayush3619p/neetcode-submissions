class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int ele;
        int cnt = 0;

        for( int i=0; i<nums.size(); i++ ){

            if( cnt == 0 ){
                cnt = 1;
                ele = nums[i];
            }else if( ele == nums[i] ){
                cnt++;
            }else{
                cnt--;
            }

        }

        int cnt1 = 0;

        for( int i=0; i<nums.size(); i++ ){
            if( nums[i] == cnt ) cnt1++;
        }

        if( nums.size()/2 < cnt1 ) {
            return ele;
    
        }
    }
};