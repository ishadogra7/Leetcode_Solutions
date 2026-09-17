class Solution {
public:
    string simplifyPath(string path) {

        vector<string>st;
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
                st.pop_back();
            }
           }
            else{
                 st.push_back(temp); }
           
          
        }
        string ans = "";
         while(!st.empty()){
             ans = "/" + st.back() + ans;
              st.pop_back();
               }
               if(ans == "")
               { return "/"; }
        return ans;
    }
};