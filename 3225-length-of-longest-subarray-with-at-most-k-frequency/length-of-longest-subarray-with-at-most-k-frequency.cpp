class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int >freq;
        int i = 0 ,j=0;
        int count = 0;
        
        while( j < n ){
            freq[nums[j]]++;

            while(freq[nums[j]] >k){
                freq[nums[i]]--;
                i++;
            }
            count= max(count , j-i+1);
            j++;
         
        }
        return count;
    }
};