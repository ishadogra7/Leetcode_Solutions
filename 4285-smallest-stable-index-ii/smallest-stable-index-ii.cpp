class Solution {
public:
    int generate(vector<int>& nums, int k , int i , int maxi , vector<int>& suffixMin){
        if(nums.size() == i){
            return -1;
        }
        maxi = max( maxi , nums[i]);
       
        if(maxi - suffixMin[i] <= k) return i;

        return generate(nums , k , i+1 , maxi, suffixMin );
       
    }
    int firstStableIndex(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int> suffixMin(n);

      suffixMin[n-1] = nums[n-1];

      for(int i = n-2 ; i >= 0 ; i--){
        suffixMin[i] = min(nums[i] , suffixMin[i+1]);
      }
        
      return generate(nums , k ,0, nums[0] , suffixMin);
     
    }
};