class Solution {
public:
    int longestValidParentheses(string s) {
        // stack<int>st;
        // st.push(-1);
         int maxi =0;
        //  int n = s.length();

        // for(int i = 0 ;i < n ;i++  ){
        //    if(s[i]  == '('){
        //      st.push(i);

        //    } 
        //    else if(s[i] == ')') {
        //        st.pop();
               
        //        if (st.empty()){
        //          st.push(i);
        //        }
        //        else{
        //          maxi = max(maxi , i - st.top());
        //        }
        //    }   
        // }
       
       
        // return maxi;


        int open = 0, close =0;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(') {
                open ++;
            }
            else{
                close++;
            }
            if(open == close){
                maxi = max(maxi , 2*open);
            }
            else if(close > open){
                open = close = 0;
            }
        }
        open = close = 0;
      
        for(int i = s.size() - 1 ; i >= 0 ;i--){
            if(s[i] == '(') {
                open ++;
            }
            else{
                close++;
            }
            if(open == close){
                maxi = max(maxi , 2*open);
            }
            else if(close < open){
                open = close = 0;
            }
        }
         return maxi;
    }
};