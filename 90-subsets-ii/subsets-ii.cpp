class Solution {
public:
      vector<vector<int>>ans;
     void generate(vector<int>nums ,vector<int>current , int start){
        if(nums.size() == start){
            if(find(ans.begin(), ans.end(), current) == ans.end()){
                ans.push_back(current);
            } 
            return;
        }
        current.push_back(nums[start]);
        generate(nums , current , start+1);
        current.pop_back();
        generate(nums, current ,start +1);
     }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>current;
        generate(nums, current ,0);
        return ans;
    }
};