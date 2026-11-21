class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int p = 0;

        for(int i = 0; i < n ; i++){
             p = p + nums[i];
            prefix[i] = p;
        }
        return prefix;
    }
};