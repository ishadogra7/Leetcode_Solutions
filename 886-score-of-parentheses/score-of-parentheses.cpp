class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        //int count =0;
        //int open =0;
        st.push(0);

        for(int i =0 ; i < s.length() ;i++){
           
            if(s[i] == '('){
                   st.push(0);
                 
            }
            else{
             int inside = st.top();
                st.pop();

                int value;

                if(inside == 0) {
                    value = 1;
                }
                else {
                    value = 2 * inside;
                }

                st.top() += value;
            }
        }

        return st.top();
    }
}; 