class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
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

        for(int  i = 0 ; i < n-1 ; i++){
            if(prefix[i+1] >= sufix[i+1]){
                count++;
            }
          
        }
return count;
    }
};