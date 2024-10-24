//(寫到一半) week07-2a.cpp 學習計畫Simulation第三題 井字遊戲
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
//讀2維陣列，得到i,j,在標示board[i][j] =1
///1變2變1變2變1變2變1變2
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};//裡面都放0
        int now = 1; //第1個下的人， 叫1:"A", 2:"B"
        //for(vector<int> move{原本用2維陣列，取出1維陣列
            for(auto move : moves){//用 auto 他會幫妳寫好
                int i = move[0], j = move[1];
                board[i][j] = now; //改成now
                myPrintBoard(board);
                now = 3 - now; //1變2，2變1，1變2，2變1
        }
        return "A"; //勝利的是誰?
    }
};
