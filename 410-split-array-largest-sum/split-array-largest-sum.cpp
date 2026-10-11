class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
          int n = nums.size();
        int count =0;
        vector<long long>prefix(n+1 , 0);
        vector<long long>sufix(n+1 , 0);
        prefix[0] = 0;
        sufix[n] =0;

        for(int i =0 ; i < n ; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        
        for(int i = n-1 ; i >= 0 ;i--){
            sufix[i] = sufix[i+1] + nums[i];
        }

        
       long long low = 0;
        long long high = prefix[n];

        for (int i = 0; i < n; i++) {
            low = max(low, (long long)nums[i]);
        }

        // Apply binary search
        while (low < high) {
            long long mid = low + (high - low) / 2;

            int count = 1;
            long long sum = 0;

            for (int i = 0; i < n; i++) {
                if (sum + nums[i] > mid) {
                    count++;
                    sum = nums[i];
                } else {
                    sum += nums[i];
                }
            }

            // Check whether the split is possible
            if (count <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};