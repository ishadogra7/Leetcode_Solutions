
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int num :nums){
            set.insert(num);
        }
        int i =1;
     
       
        while(i <=  nums.size() +1){
            
          int sum = i* k;  
           if(set.find(sum)==set.end())return sum;
            i++;
        }
         return k;
    }
};