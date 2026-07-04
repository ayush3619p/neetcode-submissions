class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int>chk;
        vector<int>chk2;

        if( nums.size() == 0 ){
            return 0;
        }
 

        for( int num : nums ){
            chk.insert(num);
        }
        for( int num : chk ){
            chk2.push_back(num);
        }

        for( int num:chk2 ){
            cout<<num<<" ";
        }

        int ctr = 1;
        int maxctr = 0;

        for( int i=1; i<chk2.size(); i++ ){
            if( chk2[i]-chk2[i-1] == 1 ){
                ctr++;
            }else{
                ctr=1;
            }
            maxctr = max( maxctr, ctr );
           
        }

        if( maxctr>0 ){
        return maxctr;
        }

        return 1;
    }
};
