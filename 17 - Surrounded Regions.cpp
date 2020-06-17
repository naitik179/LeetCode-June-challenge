class Solution {
public:
    void check(int i , int j , vector<vector<char>>& board ){
        
        if(board[i][j] == 'O'){
            board[i][j] = '1';
            if(i> 1) check(i-1 , j , board);
            if(j > 1) check(i , j-1 , board);
            if(i+1 < board.size()) check(i+1 , j ,board);
            if(j+1 < board[0].size()) check(i , j+1 , board);
        }
    }
    void solve(vector<vector<char>>& board) {
        
       
        
        if(board.empty()){
            return;
        }
        
        int r = board.size();
        int c = board[0].size();
        
        for(int i=0;i<r;i++){
            check(i , 0 , board); // first column
            check(i , c-1 , board); // last column
        }
        
        for(int j=1;j<c-1;j++){
            check(0 , j , board); // first row
            check(r-1 , j , board); // last row
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                else if(board[i][j] == '1'){
                    board[i][j] = 'O';
                }
            }
        }
    }
};
