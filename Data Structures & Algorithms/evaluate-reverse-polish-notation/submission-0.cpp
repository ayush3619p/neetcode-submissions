class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>st;

        for( int i=0; i<tokens.size(); i++ ){

            if( tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){

                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                int c = 0;

                char o = tokens[i][0];

                switch(o){
                case '+': c = b+a; break;
                case '-': c = b-a; break;
                case '/': c = b/a; break;
                case '*': c = b*a; break;
                }


                st.push(c);

            }else{
                int s = stoi(tokens[i]);
                st.push(s);
            }

        }

        return st.top();
        
    }
};
