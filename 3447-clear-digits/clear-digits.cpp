class Solution {
public:
    string clearDigits(string s) {
       stack<char>st;
                string ans;


       for(char ch : s){
          if (ch >= 'a' && ch <= 'z'){
            st.push(ch);
        }
        else{
            if (!st.empty()) {
                st.pop();
           }
        }
       } 

    

       while(!st.empty()){
          ans.push_back(st.top());
          st.pop();
       }
       reverse(ans.begin(),ans.end());
       
       return ans;
    }
};