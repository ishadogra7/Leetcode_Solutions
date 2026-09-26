class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int count_l =0;
        int count_r = 0;
        int sum =0;
        int add =0;

       for(int i =0 ; i <n/2 ;i++){
           if(num[i] == '?'){
            count_l ++;
           }
           else{
            sum = sum + num[i] - '0';
           }
       } 

       for(int i = n/2 ; i < n ;i++){
           if(num[i] == '?'){
            count_r ++;
        }
           else{
            add= add + num[i] -'0';
           }
       }
       
        if((count_l + count_r) % 2 == 1) {
            return true;
        }

        if((sum > add && count_l >= count_r) ||
           (sum < add && count_l <= count_r)) {
            return true;
        }
       int count_diff = abs(count_l - count_r);
       int sum_diff = abs(sum - add);

        if(sum_diff == 9 * count_diff / 2) {
            return false;
        }

       return true;;
    }
};