class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st; 
        if(k == 0){
            return num;
        }

        for(int ch : num){
            
            while(!st.empty() && st.top() > ch && k > 0){
                st.pop();
                k--;
            }
            st.push(ch);
        }

         while(!st.empty() && k > 0){
                st.pop();
                k--;
            }
        
      string ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

          reverse(ans.begin(), ans.end());

        int i = 0;
        while(i < ans.length() && ans[i] == '0'){
            i++;
        }

        ans = ans.substr(i);

        if(ans.empty()){
            return "0";
        }
        return ans;
    }
};