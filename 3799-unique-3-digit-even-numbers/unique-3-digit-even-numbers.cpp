class Solution {
public:
  int freq[10]={};
  int count = 0;
    void solve (int position){
        if(position == 3){
            count++;
            return;
        }
        for(int digit = 0 ;digit<= 9;digit++){
            if(freq[digit] == 0) continue;  // digit not available
            if(position == 0 && digit == 0)continue; // for fist position no 0 digit
            if(position == 2 && digit %2 != 0)continue;

            freq[digit]--; //use digit
            solve(position + 1); //recursively choose the next digit
            freq[digit]++; //backtrack..put the digit back
        }
    }
    int totalNumbers(vector<int>& digits) {
        
        for(int digit : digits){
            freq[digit]++;
        }
        solve(0);
        return count;
    }
};