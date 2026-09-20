class Solution {
public:
    int reverseDegree(string s) {
       int pro = 1;
       int add = 0;
       for(int i = 1 ; i <= s.length(); i++){
        
           pro = (26- (s[i-1] - 'a') ) *  i ;  
           add += pro;
       } 
       return add;
    }
};