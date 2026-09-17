class Solution {
public:
    string simplifyPath(string path) {

        stack<string>st;
        int i =0 ,top = -1; 
        int n =  path.length();

        while(i < n ){
           if(path[i] =='/'){
            i++;
            continue;
           }
           string temp ="";
          while(i < n && path[i] != '/'){
            temp+= path[i];
            i++;
           }

           if(temp == ".")continue;

           if(temp == ".."){
            if(!st.empty()){
                st.pop();
            }
           }
            else{
                 st.push(temp); }
           
          
        }
        string ans = "";
         while(!st.empty()){
             ans = "/" + st.top() + ans;
              st.pop();
               }
               if(ans == "")
               { return "/"; }
        return ans;
    }
};