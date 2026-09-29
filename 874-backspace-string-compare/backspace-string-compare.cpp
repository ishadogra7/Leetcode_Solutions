class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>st;
       stack<char>tt;

       for(char ch :s){

         if(ch == '#'){
              if(!st.empty())
            {        st.pop();}
        }
        else{
            st.push(ch);
        }
       } 

       for(char ch :t){
        if(ch =='#'){
             if(!tt.empty()){
                    tt.pop();
                }
        }
        else{
            tt.push(ch);
        }
       }
       while(!st.empty() && !tt.empty()){
          if(st.top() == tt.top()){
             st.pop();
             tt.pop();

          }
          else{
            return false;
          }
       }
       return st.empty() && tt.empty();
    }
};