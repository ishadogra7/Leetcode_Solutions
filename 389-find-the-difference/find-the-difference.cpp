class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>set;
       for(int  i = 0 ; i < t.length() ; i++){
          set[t[i]]++;
       }
      
        for(int i = 0 ; i < s.length(); i++){
           
                 set[s[i]]--;
        }
        for(auto i : set){
            if(i.second > 0){
                return i.first;
            }
        }
       return '\0';
    }
};