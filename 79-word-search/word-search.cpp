class Solution {
public:
    bool generate(vector<vector<char>>& board , string word , int rows , int cols ,int index){
        if(index == word.length()){
            return true;
        }
        if(rows < 0||rows >= board.size() ||cols <0 ||cols >= board[0].size() ){
            return false;
        }
        if(board[rows][cols] != word[index])return false;
        
        char temp = board[rows][cols];
        board[rows][cols] ='#';
         
        bool up = generate(board , word , rows-1 , cols , index+1); //up
        bool down = generate(board , word , rows +1 , cols , index +1); // down
        bool left = generate(board , word , rows , cols -1 , index + 1);//left
        bool right = generate(board , word , rows , cols +1 , index + 1);//right

        board[rows][cols] = temp;
        return up ||down || left|| right;

    }
    bool exist(vector<vector<char>>& board, string word) {
      for(int rows = 0 ; rows <board.size() ;rows++){
        for(int cols = 0 ; cols <board[0].size(); cols++){
            if(generate(board , word , rows , cols , 0)){
                return true;
            }
        }
      }
      return false;  
    }
};