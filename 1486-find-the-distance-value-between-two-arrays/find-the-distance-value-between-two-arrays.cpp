class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count =0 ;

        for(int  i = 0 ; i < arr1.size(); i++){
            int j =0 ;
            int num =0;

            while(j < arr2.size() && abs(arr1[i]-arr2[j]) > d){
                num++;
                 j++;
            }
            if(num == arr2.size()){
                count++;
            }
                
        }
        return count;
    }
};