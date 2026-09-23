class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    unordered_set<int>mp;
       
    //    int ans ;

    //    for(int i =0 ; i < nums.size() ;i++){
        
    //      if(mp.find(nums[i]) != mp.end() ){
    //         ans = nums[i];
    //         break;
    //      }
    //       mp.insert(nums[i]);
    //    }
    //   return ans;

    unordered_map<int ,int> mp;
    int ans;

    for(int i =0 ; i< nums.size() ; i++){
        mp[nums[i]]++;

        if(mp[nums[i]] == 2){
            ans = nums[i];
            break;
        }
    }
    return ans;
    }
};