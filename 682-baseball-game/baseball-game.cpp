class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
       
        for(int i = 0 ; i < operations.size() ; i++){
            if(st.empty() && (operations[i] == "D" || operations[i] == "C" || operations[i] == "+")){
               continue;
            }

            if(operations[i] == "D"){
               int doble = st.top() * 2;
               st.push(doble);
            }
            
            else if(operations[i] == "C"){
                st.pop();
            }
            else if( operations[i] == "+"){
               int topElement = st.top();
               st.pop();

               int secondElement = st.top();

               int temp = topElement + secondElement;

             
                st.push(topElement);
                   st.push(temp);
            } 
            else {
                int j = stoi(operations[i]);
                st.push(j);
            }

        }
         
      int ans = 0;

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

       
        return ans;

    }
};