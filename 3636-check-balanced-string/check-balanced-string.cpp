class Solution {
public:
    bool isBalanced(string num) {
        int even_index = 0;
        int odd_index = 0;
        for(int i = 0; i < num.length() ;i++){
            if(i% 2 == 0){
                even_index = even_index + num[i] -'0';
            }
            else{
                odd_index = odd_index +  num[i] -'0';
            }
        }
     if(even_index == odd_index){
        return true;
     }
     return false;
    }
};