class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
         int maxi =0;
         int n = s.length();

        for(int i = 0 ;i < n ;i++  ){
           if(s[i]  == '('){
             st.push(i);

           } 
           else if(s[i] == ')') {
               st.pop();
               
               if (st.empty()){
                 st.push(i);
               }
               else{
                 maxi = max(maxi , i - st.top());
               }
           }   
        }
       
       
        return maxi;
    }
};