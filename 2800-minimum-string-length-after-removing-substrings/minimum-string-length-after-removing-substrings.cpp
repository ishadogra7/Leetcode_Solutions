class Solution {
public:
    int minLength(string s) {
        stack<char>st;

        for(char ch :s){
            if(st.empty()){
                st.push(ch);
            }
            else if(!st.empty()){
               if((ch == 'B' && st.top() == 'A') || (ch == 'D' && st.top() == 'C')){
                 st.pop();
               }
               else{
                st.push(ch);
                }
            }

           
        }


        int count =0;
        while(!st.empty()){
            st.pop();
            count++;
        }


        return count;
    }
};