class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int maxi =0;
        int count0 =0;
        int count1 = 0;
        int left =0;        

        for(int i =0 ; i< n ;i++){
            if(nums[i] == 1 ){
               count1++; 
              
            }
            else if(nums[i] == 0 ){
                count0 ++;
           
            }
            while(count0 > k){
               if(nums[left] == 0){
                 count0--;
               }
               else{
                count1--;
               }
               left++;
            }
             int value = count0 + count1;
                maxi = max(maxi , value);
        }
      return maxi;
    }
};