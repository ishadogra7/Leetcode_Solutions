class Solution {
public:
    int findMin(vector<int>& nums) {
    //    int start=0;
    //    int mini=INT_MAX;
    //    int end=nums.size()-1;
    //    while(start<=end){
    //     int mid=start + (end - start)/2;
        
    //     if(nums[start] <= nums[end]){
    //            mini = min(mini, nums[start]);
    //            break;
    //        }
    //     if(nums[start]<=nums[mid]){
    //         mini=min(mini,nums[start]);
    //         start=mid+1;
    //     }
    //     else{
    //         mini=min(mini,nums[mid]);
    //         end = mid - 1;
    //     }  
    //    }
    int mini = *min_element(nums.begin(), nums.end());
       return mini; 
    }
};