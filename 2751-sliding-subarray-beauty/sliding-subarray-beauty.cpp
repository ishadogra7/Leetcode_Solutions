class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        vector<int> ans;
        vector<int> freq(51, 0);
        
        int i = 0;
        int j = 0;
        
        while(j < nums.size()) {
            
            if(nums[j] < 0) {
                freq[-nums[j]]++;
            }
            
            if(j - i + 1 == k) {
                
                int count = 0;
                int beauty = 0;
                
                for(int p = 50; p >= 1; p--) {
                    count += freq[p];
                    
                    if(count >= x) {
                        beauty = -p;
                        break;
                    }
                }
                
                ans.push_back(beauty);
                
                if(nums[i] < 0) {
                    freq[-nums[i]]--;
                }
                
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};