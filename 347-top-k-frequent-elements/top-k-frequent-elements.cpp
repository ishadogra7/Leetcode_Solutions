class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>set;

        for(int i = 0 ; i < nums.size() ; i++){
          
                  set[nums[i]]++;
            
        }

      
        vector<int>ans;
        while(k > 0){
            int maxi = 0;
            int element = 0;

            for(auto i : set){

                if(i.second > maxi){
                    maxi= i.second;
                    element = i.first;
                }
            }
            ans.push_back(element);
            set.erase(element);

            k--;

        
        }
        return ans;
    }
};