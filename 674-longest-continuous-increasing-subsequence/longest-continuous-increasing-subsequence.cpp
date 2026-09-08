class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        // if(nums[0] == nums[1]){
        //     return 1;
        // }
        int count =1;
        int maxi = 1;
       for(int i = 0 ; i< nums.size()-1; i++){
        if(nums[i] <nums[i+1]){
            count++;
       }
       else{
         count = 1;
       }
        maxi = max(maxi, count);
        }
        return maxi;
    }
};