#include<vector>
class Solution {
public:
    bool isValid(string s) {
       vector<char>arr;
       stack<int>st;
       int top =-1;
       for(int i=0;i<s.length();i++){
         if(s[i]=='(' ||s[i]=='{' ||s[i] =='['){
            st.push(s[i]);

         }
         else if(!st.empty() &&
                   ((st.top() == '(' && s[i] == ')')||
                      (st.top() =='{' &&  s[i]=='}') ||
                      (st.top() == '[' && s[i] ==']'))){
                        st.pop();
                        top--;
                      }
                      else{
                        return false;
                      }
        }
       return st.empty()? true:false;
       
    }
};