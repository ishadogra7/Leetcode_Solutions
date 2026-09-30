// class Solution {
// public:
//     vector<int> maxDepthAfterSplit(string seq) {
//         int n = seq.length();
//         stack<char>st;
//         //stack<char>B;
//         vector<int>ans(n , 0);
//         int count = 0;

//      for(int i = 0 ; i <= n ; i++){
//         if( seq[i] =='('){
//             if(count % 2 != 0){
//                 ans[i] = 1;
//             }
//             st.push(seq[i]);
//             count++;
//         }
//         else if(seq[i] == ')' &&  !st.empty()){

//             count--;
//             if(count % 2 == 1){
//                 ans[i] = 1;
//             }
//             st.pop();
//         }
      

//         }
//      return ans;
    
//     }
// };
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        int n = seq.length();

        stack<char> A;
        stack<char> B;

        vector<int> ans(n, 0);

        int count = 0;

        for(int i = 0; i < n; i++){

            if(seq[i] == '('){

                if(count % 2 == 0){

                    A.push(seq[i]);
                    ans[i] = 0;
                }
                else{

                    B.push(seq[i]);
                    ans[i] = 1;
                }

                count++;
            }

            else if(seq[i] == ')'){

                count--;

                if(count % 2 == 0){

                    A.pop();
                    ans[i] = 0;
                }
                else{

                    B.pop();
                    ans[i] = 1;
                }
            }
        }

        return ans;
    }
};