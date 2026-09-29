#include <cctype>
class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        stack<char>st;
        vector<char>ans;

        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
          
            else if(tolower(ch) == tolower(st.top()) &&
                    isupper(ch) != isupper(st.top())){

                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin() , ans.end());
        string result(ans.begin(), ans.end());
        return result;
    }
};