class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       
     for(int i =0 ; i < nums.size() ; i++){
        int neww = nums[i];
         int sum =0;
        while(neww > 0){
            int digit = neww % 10;
            sum = sum + digit;
            neww = neww / 10;
        }
          if( sum == i){
            return i;
         }
     }
       return -1; 
    }
};