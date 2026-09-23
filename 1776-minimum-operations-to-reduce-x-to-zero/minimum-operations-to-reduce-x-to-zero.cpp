class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int  n = nums.size();
        long long sum = 0;

        for(int i =0 ; i < n ;i++){
            sum += nums[i];
        }

        long long target = sum - x;

        if(target < 0) return -1;

        if(target == 0 ) return n;



        unordered_map<long long , int>mp; 
        long long prefix = 0 ;
        int maxi = -1;

        mp[0] =-1;

      for(int i =0 ; i< n ; i++){
        prefix = prefix + nums[i];

        long long rem = prefix - target;
        if(mp.find(rem) != mp.end() ){
            maxi = max(maxi , i - mp[rem]);
        }
        if(mp.find(prefix) == mp.end()){
            mp[prefix] =i;
        }
      }
        if(maxi == -1){
            return -1;

        }
        return n- maxi;
    }
};