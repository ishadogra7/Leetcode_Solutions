class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
         int count =0;
         
        for(int i = 0 ; i < s.length() ;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() == '('  && s[i] ==')'){
                    st.pop();
                }

            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};