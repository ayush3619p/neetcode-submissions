class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map< int, int > check;

        for( int num : nums ){
            check[num] ++;
        }

        for( auto& [ key, cnt ] : check ){
            if( cnt % 2 != 0 ){
                return false;
            }
        }

    return true;
              
    }
};