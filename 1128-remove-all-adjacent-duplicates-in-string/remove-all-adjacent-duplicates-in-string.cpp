     //1st method = with the using length;

/*class Solution {
public:
    string removeDuplicates(string s) {
        string s2="";
        int length=0;
        for(char ch :s){
            if(length>0 && ch==s2[length-1]){
                s2.pop_back();
                length--;
            }
            else{
                s2.push_back(ch);
                length++;
            }
        }
        return s2;
    }
};


*/
  

       //2nd method with the conversion then subraction
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string s2="";
//         int length=0;
//         for(char ch :s){
//             if(length>0){
//                 int sub=ch-s2[length-1];
//               if(sub==0){
//                 s2.pop_back();
//                 length--;
//                 continue;
//                }
//             }
//                 s2.push_back(ch);
//                 length++;
            
//         }
//         return s2;
//     }
// };


            // optimal and without using length;
 class Solution {
 public:
     string removeDuplicates(string s) {
        //  string copy="";
        //  for(char ch :s){
        //      if(!copy.empty() && copy.back()==ch){
        //          copy.pop_back();
        //      }
        //      else{
        //          copy.push_back(ch);
        //      }
        //  }
        //  return copy;

        int n = s.length();
        stack<char>st;
        vector<char>ans;

        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
          
            else if( !st.empty() && ch == st.top()) {

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