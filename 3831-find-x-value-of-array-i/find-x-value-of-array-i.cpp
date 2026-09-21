class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long > result(k , 0);
        vector<long long> prevresult(k,0);

        for(int i =0 ; i < nums.size() ;i++){
            vector<long long >currcount(k, 0);
  
            int currelementrem = nums[i] % k ;
            currcount[currelementrem]++;


            for(int oldrem = 0 ;oldrem <= k-1 ; oldrem++){
              int newrem = ((long long)oldrem *nums[i]) % k;
              currcount[newrem] += prevresult[oldrem];
            }
           prevresult = std::move(currcount);

           for(int x= 0 ; x <= k-1 ;x++){
            result[x] += prevresult[x];
           }
        }
        return result;
    }
};