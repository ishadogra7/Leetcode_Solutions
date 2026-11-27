class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int , int> m;
        vector<int>ans;

        for(int num : nums){
            m[num]++;
           
        }

        for(int i =0 ; i < nums.size() ; i++){
            int j = i + 1 ;
            if(m.find(j) == m.end()){
                ans.push_back(j);
            }
        }
        return ans;
    }
};