class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> ust;

        for( int num : nums ){

            if( ust.find(num) != ust.end() ){
                return true;
            }

            ust.insert(num);

        }
        
        return false;
      
    }
};