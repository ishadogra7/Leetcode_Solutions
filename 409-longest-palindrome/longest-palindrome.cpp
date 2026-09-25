class Solution {
public:
    int longestPalindrome(string s) {
       int n = s.length();
       unordered_map<char , int > mp;

       for(char &ch : s){
         mp[ch]++;
       } 
      
      bool oddfreq = false;
      int ans = 0;

      for(auto &i : mp){
        if(i.second % 2 == 0){
            ans = ans + i.second;
        }
        else{
            ans = ans + i.second - 1;
            oddfreq = true;
        }
      }    
      if(oddfreq == true){
        ans = ans +1;
      }
      return ans;
  
    }
};