class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
       
       int n = nums.size();
       unordered_map<int, int> temp;

        for(int i = 0 ; i < n ;i++){
            temp[nums[i]]++;
            if(temp[nums[i]] > 1) return true;
        }
        return false;
    }
};