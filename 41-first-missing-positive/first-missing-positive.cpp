class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
  
        // int n = nums.size();

        // for(int i =0 ; i< n ; i++){
        //     maxi = max( nums[i], maxi);
        // } 
        //  int mini = maxi;
        // int prev;
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] > 0 && nums[i] < maxi){
        //         prev =mini;
        //         mini = min(nums[i] , mini);
        //     }
        //     else{

        //     }
        // }
       int missing = 1;
       sort(nums.begin() , nums.end());
       for(int i = 0; i < nums.size() ; i++){
           if(nums[i] > 0){
              if(nums[i] == missing){
                missing++;
              }
              else if(nums[i] > missing){
                break;
              }
           }
       }  
      return missing;

    }
};