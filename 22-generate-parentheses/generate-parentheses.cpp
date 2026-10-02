class Solution {
public:
    vector<string>ans;
    void generate(int n, string current ,int open , int close){
        if(current.length()== 2*n){
        ans.push_back(current);
        return;
        }
        if(open < n){
            current.push_back('(');
            generate(n,current ,open+1 , close);
            current.pop_back();
        }
       if(open >close){
        current.push_back(')');
        generate(n ,current , open , close +1);
        current.pop_back();
       }
    }
    vector<string> generateParenthesis(int n) {
        generate(n , "" ,0 ,0);
        return ans;
    }
};