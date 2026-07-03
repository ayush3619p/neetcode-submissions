class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector< int >output;

        int n = nums.size();

        vector< int >pre;

        pre.push_back(1);
        int product = 1;
        for( int i=0; i<nums.size(); i++ ){
            product*=nums[i];
            pre.push_back(product);
        }

        for( int num: pre ){
            cout<<num<<" ";
        }
        

        vector<int>post;
        product=1;
        for( int i=nums.size() -1; i>=0; i-- ){
            product*=nums[i];
            post.push_back(product);
        }
        reverse(post.begin(), post.end());
        post.push_back(1);

        for( int num: post ){
            cout<<num<<" ";
        }


        int m = 1;
        int o = 0;
        while( m < pre.size() ){
            output.push_back( pre[m-1] * post[o+1] );
            m++;
            o++;
        }
        

        return output;
    }
};
