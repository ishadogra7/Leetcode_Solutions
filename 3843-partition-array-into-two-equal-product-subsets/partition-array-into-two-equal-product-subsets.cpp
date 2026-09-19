class Solution {
public:
    bool divide(vector<int>& nums , long long target , int i , long long p1 , long long p2){
        if(p1 > target || p2 > target){
            return false;
        }
        if(i == nums.size()){
            return p1 == target && p2 == target;
        }

        bool a = false;
        if(a <= target / nums[i]){
            a = divide(nums, target , i+1 , p1 *nums[i] , p2);
        }

        bool b= false;
        if(b <= target/ nums[i]){
            b = divide(nums, target , i+1 , p1 , p2 * nums[i]);
        }

        return a || b;
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        
          return divide(nums , target , 0 , 1 , 1);
    }
};