class Solution {
public:
    void moveZeroes(vector<int>& nums) {


    // int nonzero =0;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]!=0){
    //         swap(nums[i],nums[nonzero]);
    //         nonzero++;
    //     }
    // }

   int j=0;
   int i =0 ;
    while( i < nums.size()){
       class Solution {
public:
    void moveZeroes(vector<int>& nums) {


    // int nonzero =0;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]!=0){
    //         swap(nums[i],nums[nonzero]);
    //         nonzero++;
    //     }
    // }

   int j=0;
   int i =0 ;
    while( i < nums.size()){
        // if(nums[i]  == 0){
        //     j =  i;               
        // }
        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
        i++;
    }

    }
};
        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
        i++;
    }

    }
};