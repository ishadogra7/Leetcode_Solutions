class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        // if( n  < 2)return false;
        vector<int> temp(n+1,0);

        for(int i = 0 ;i< n;i++){
               if (nums[i] < 1 || nums[i] > n - 1)
                  return false;

              temp[nums[i]]++;
        }

        for(int i= 1; i<= n-2 ; i++){
            if(temp[i] != 1){
                return false;
            }
        }

        if(temp[n - 1] != 2) {
            return false;
        }
        return true;
    }
};