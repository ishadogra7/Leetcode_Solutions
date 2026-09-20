class Solution {
public:
    int reverseDegree(string s) {
     
       int add = 0;
       for(int i = 1 ; i <= s.length(); i++){
        
           int pro = (26- (s[i-1] - 'a') ) *  i ;  
           add += pro;
       } 
       return add;
    }
};