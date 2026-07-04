class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }
        
        unordered_set<int>ut(nums.begin(), nums.end());
        int longest = 0;

        for( int num : nums ){
            cout<<num<<" ";
        }

 

        for( auto it : ut ){

            if( ut.find(it-1) == ut.end() ){
                int ctr = 1; 
                int x = it;  

                while( ut.find( x+1 ) != ut.end() ){
                    ctr++;
                    x = x+1;
                }

                longest = max( longest, ctr );
            }
            
            
        }
        

        return longest;

    }
    
};
