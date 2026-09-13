class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 ||n ==2)return 0;
        int count = 0;
        int len =2;
        
        for(int i = 2 ; i< n ;i++){
            if(nums[i] -nums[i-1] ==nums[i-1]- nums[i-2] ){
                len++;
                count = count + len -2;
            }
            else{
                len= 2;
            }
          
        }
        return count;
    }
};