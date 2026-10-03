class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int> map;

       for(char ch : s){
          map[ch]++;
       }       
      
      string ans = "";

       while(!map.empty()){

            int maxi = 0;
            char ch;

            for(auto i : map){
                if(i.second > maxi){
                    maxi = i.second;
                    ch = i.first;
                }
            }

            for(int i = 0; i < maxi; i++){
                ans += ch;
            }

            map.erase(ch);
        }

        return ans;
       
    }
};