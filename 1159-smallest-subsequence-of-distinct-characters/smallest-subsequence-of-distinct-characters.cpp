class Solution {
public:
  string smallestSubsequence(string s) {
      map<char , int> result;
      for(int i = 0 ; i<s.size();i++){
        result[s[i]] = i;
      }

      set<char> used;
      string st;

      for(int i = 0 ; i< s.size() ;i++){
        char ch = s[i];

        if(used.find(ch) != used.end()){
            continue;
        }

        while(!st.empty()&&  st.back() >ch &&  result[st.back()] > i){
            used.erase(st.back());
            st.pop_back();      
            
              }

            st.push_back(ch);
            used.insert(ch);
      }
      return st;
    }
};