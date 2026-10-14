class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }

        string demo ="";

        while(num > 0){
           
           int digit;

            if( sum >= 9){
                digit = 9;

            }
            else{
               digit = sum;
            }

            demo.push_back('0' + digit);
            sum = sum - digit;
            num--;
        }
        if(sum != 0){
            return "";
        }

        return demo;
    }
};