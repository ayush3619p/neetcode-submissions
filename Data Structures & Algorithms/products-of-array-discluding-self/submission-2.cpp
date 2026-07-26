class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>ans;
        int n = nums.size()+1;

        vector<int>prefix;
        prefix.push_back(1);

        vector<int>postfix;
        postfix.push_back(1);

        for( int i=0; i<nums.size(); i++ ){
            int pr = prefix[i]*nums[i];
            prefix.push_back(pr);
        }

        for( int i=0; i<nums.size(); i++ ){
            int pr = postfix[i]*nums[n-i-2];
            postfix.push_back(pr);
        }

        reverse( postfix.begin(), postfix.end() );

        for( int num: postfix ){
            cout<<num<<" ";
        }

        for( int i=0; i<nums.size(); i++ ){
            int pr = prefix[i]*postfix[i+1];
            ans.push_back(pr);
        }

        return ans;

    }
};
