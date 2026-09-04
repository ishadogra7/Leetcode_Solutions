class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = nums[0];
        int n = nums.size();
       for(int i = 0 ; i< n ; i++){
           maxi = max(maxi , nums[i]);

            int mini = nums[i];
            int j = i;
           while(j< n){
               mini = min(mini ,nums[j]);
               j++;
           }
           
           int sub = maxi - mini;
           if(sub <= k){
                  return i;
           }
       } 
       return -1;
    }
};