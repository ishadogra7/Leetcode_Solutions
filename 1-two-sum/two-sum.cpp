// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
       
//         int n = nums.size();
//        for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 vector<int> ans;
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//                 /*
//                 return{i,j};  */       
//                    }
//             }
//         }


// return { };

    
//  }
// };



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n= nums.size(); 
       for(int i=0;i<n;i++){
          int hash=target-nums[i];
          if(m.find(hash)!=m.end()){     //m.end() =checks already exit or not inside map 
            return {m[hash],i};
          }  
          m[nums[i]]=i;
        }
        return {};
    }
};