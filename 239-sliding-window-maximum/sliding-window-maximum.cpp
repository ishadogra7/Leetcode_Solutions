class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        int maxi =0 ;
        int window_size =0;
        map<int, set<int>> mp;

        int j =0;
        int i =0;

        while( j < n ){
           mp[nums[j]].insert(j);
            j++;

            
            if(j -i  == k){

                int  maxi =  mp.rbegin()->first;
                int index = *mp[maxi].begin();
                 ans.push_back(nums[index]);

                 mp[nums[i]].erase(i);

                 if(mp[nums[i]].empty()){
                     mp.erase(nums[i]);
                 }

                  i++;
            }
           
           
           
        }
        return ans;
    }
};