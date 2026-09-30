class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> prefix_min(n);
         prefix[0] = nums[0];
         prefix_min[0] = nums[0];

         int maxi = nums[0];
         

        for(int i =1 ; i< n; i++){
             int pro1 = prefix[i-1] * nums[i];
             int pro2 = prefix_min[i-1] * nums[i];
             
             if(nums[i] >pro1 && nums[i] > pro2){
                prefix[i] = nums[i];
             }
             else if(pro1 > pro2){
                prefix[i] = pro1;
             }
             else{
                prefix[i] = pro2;
             }

            
            if(nums[i] < pro1 && nums[i] < pro2){
                prefix_min[i] = nums[i];
            }
            else if( pro1 <pro2){
                prefix_min[i] = pro1;

            }
            else{
                prefix_min[i] = pro2;
            }
            maxi = max(maxi , prefix[i]);
        }
        return maxi;
    }
};