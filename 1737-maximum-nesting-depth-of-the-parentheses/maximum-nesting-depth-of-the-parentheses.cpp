class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int maxi = 0;
        stack<int> st;
        for(int i =0 ;i < s.length() ;i++){
            if(s[i] == '('){
                st.push(s[i]);
                count++;
            }
            else if(s[i] == ')'){
                st.pop();
                count--;
            }
            if(count > maxi){
                maxi = count;
            }

        }
        
    
        // for(int i=0 ; i < s.length() ;i++){
        //     if(s[i] == '(') count++;
        //     else if(s[i] == ')') count--;
        //     if(count >maxi){
        //         maxi = count;
        //     }
        //  }
        return maxi;
    }
};