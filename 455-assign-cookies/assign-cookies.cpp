class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        // Step 1: Sort both arrays
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // child pointer
        int j = 0; // cookie pointer
        int count = 0;

        // Step 2: Try assigning cookies
        while(i < g.size() && j < s.size()){

            if(s[j] >= g[i]){
                count++; // child satisfied
                i++;
                j++;
            }
            else{
                j++; // try bigger cookie
            }
        }

        return count;
    }
};