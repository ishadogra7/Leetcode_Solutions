class Solution {
public:
    int countCommas(int n) {
        if(n < 1000)return 0;
        if(n < 100000) return n - 999;
        return 99001;
        // int count;
        // for(int i = 1000 ; i <= n ; i++){
        //     count++;
        // }
        // return count;
    }
};