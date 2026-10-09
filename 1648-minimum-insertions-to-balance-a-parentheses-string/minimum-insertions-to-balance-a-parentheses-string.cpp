class Solution {
public:
    int minInsertions(string s) {
        // stack<char>open;
        // stack<char>close;
        int total =0;
        int clo =0;
        // int op =0;

        for(int i =0 ;i < s.length();i++){
            if(s[i] == ')'){
                clo--;

                if (clo < 0) {
                    total++;
                    clo = 1;
                }
            }

            
            else{
                 if (clo % 2 == 1) {
                    total++;
    
                    clo --;
                }

               clo += 2;
            }   
        }
        
        return total + clo;
   }
};