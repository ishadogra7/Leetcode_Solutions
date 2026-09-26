class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0] = nums[0];
    suffix[n-1] = nums[n-1];
            
            //prefix
    for(int i=1;i<n;i++){

        prefix[i] = prefix[i-1]*nums[i];
    }
            //suffix
    for(int i=n-2 ; i>=0 ; i--){

        suffix[i] = suffix[i+1] * nums[i];
    }
            // chnages in prefix
    for(int i = n-1 ; i >= 0 ;i--){
        if(i == n-1){
            prefix[i] = prefix[i-1];
        }
        else if(i == 0){
             prefix[i] = suffix[i+1];
        }
        else{
            prefix[i] = prefix[i-1] * suffix[i+1];
        }
    }
    return prefix;
    }
};