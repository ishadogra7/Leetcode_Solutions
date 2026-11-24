
class Solution {
public:
    int maxLength(vector<int>& nums) {

        int n = nums.size();
        int maxi = 0;

        for(int i = 0; i < n; i++) {

            long long product = 1;
            int gcdVal = 0;
            int lcmVal = 1;

            for(int j = i; j < n; j++) {

                product = product * nums[j];

                gcdVal = gcd(gcdVal, nums[j]);

                lcmVal = lcm(lcmVal, nums[j]);

                if(product > 25200) {
                    break;
                }

                if(product == 1LL * gcdVal * lcmVal) {

                    maxi = max(maxi, j - i + 1);

                }
            }
        }

        return maxi;
    }
};