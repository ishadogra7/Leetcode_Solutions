class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        long long sum =0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            
            nums[i] = nums[i] *  nums[i];
            
        }

        sort(nums.begin() , nums.end());

        for(int i = 0 ; i <n /2 ; i++){
              sum = sum - nums[i];
        }
        
        
        for(int i = n/2 ; i <n ; i++){
              sum = sum + nums[i];
        }

        return sum;
    }
};