class Solution {
public:
    int countCommas(int n) {
        if(n < 1000)return 0;
        int count;
        for(int i = 1000 ; i <= n ; i++){
            count++;
        }
        // if(n == 100000){
        //     count++;
        // }
        return count;
    }
};