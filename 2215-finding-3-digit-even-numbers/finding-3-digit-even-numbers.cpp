class Solution {
public:
    vector<int>ans;
    int freq[10] = {};

    void solve(int position , vector<int>& current){
        if(position == 3){
            int num = current[0] * 100 + current[1] * 10 + current[2];
            ans.push_back(num);
            return;
        }
        for(int digit = 0 ; digit <= 9 ; digit++){
          if(freq[digit] == 0 )continue;
          if(position == 0 && digit == 0)continue;
          if(position ==2 && digit % 2 ==1)continue;
          freq[digit]--;
          current.push_back(digit);
          solve(position +1 , current);
          current.pop_back();
          freq[digit]++;
        
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        for(int digit :digits){
            freq[digit]++;
        }
         vector<int> current;
        solve(0 ,current);
        return ans;
    }
};