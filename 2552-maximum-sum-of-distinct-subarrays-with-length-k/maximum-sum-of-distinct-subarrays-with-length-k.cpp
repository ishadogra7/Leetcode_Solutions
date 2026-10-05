class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long window_sum = 0;
        int n = nums.size();
        long long maxi = 0 ;

        int j  =0;
        int i =0 ;

        unordered_map< int ,int >mp;
         
         while(j < n){
                window_sum += nums[j];
                mp[nums[j]]++; 
              
              if(j - i + 1 == k){

                if( mp.size() == k){
                    maxi = max( maxi , window_sum);
                }
                mp[nums[i]]--;

                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }

                window_sum = window_sum - nums[i];
                i++;
              }
            
            j++;
           
         }
    return maxi;

    }
};