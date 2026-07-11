class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> ust;

        for( int num : nums ){

            if( ust.count(num)  ){
                return true;
            }

            ust.insert(num);

        }
        
        return false;
      
    }
};