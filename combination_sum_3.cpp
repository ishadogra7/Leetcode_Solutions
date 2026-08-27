#include<vector>
using namespace std;

class Solution {
public:
vector<vector<int>> ans;
    void generate(int k , int n , vector<int>current , int start,vector<int> nums){
        if(n == 0 && k == 0){
           ans.push_back(current);
           return;
        }
        if(k == 0 || n < 0) {
            return;
        }
        for(int i  = start ; i < 9 ; i++){
            current.push_back(nums[i]);
            generate(k-1 , n - nums[i] , current ,i+1 ,nums );
            current.pop_back();
        }
    }
    vector<vector<int> > combinationSum3(int k, int n) {
        vector<int> current;
        vector<int> nums = {1 , 2,3,4,5,6,7,8,9};
    	generate(k , n ,current, 0,nums);
        return ans;
    }
};