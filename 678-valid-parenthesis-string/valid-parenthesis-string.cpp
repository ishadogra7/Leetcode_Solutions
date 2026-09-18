class Solution {
public:
    bool checkValidString(string s) {
       int n = s.length();
       stack<char>st;
       stack<int>star;
       int top = -1;

       for(int i =0; i<n ;i++){
           if(s[i] == '('){
            st.push(i);
            top++;
           }
           else if( s[i] =='*'){
            star.push(i);
           }
          else{
            if( !st.empty()){
                st.pop();
                top--;
            }
            else if( !star.empty()){
                star.pop();
            }
            else{
            return false;
           } 
          }
           
       } 

       while(!st.empty() && !star.empty()){
           if(st.top() > star.top())return false;
           
            st.pop();
            star.pop();
            top--;


       }
       if( !st.empty())return false;
       return true;
    }
};