class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();
        int maxi =0;
        int prefix =0;

        for(int i =0 ; i< n ;i++){
            if(nums[i] == 1){
                prefix = prefix + nums[i];
            }
            else if(nums[i] == 0){
                maxi = max(maxi , prefix);
                prefix = 0;
            }
        }
          maxi = max(maxi, prefix);
         return maxi;
    }
};