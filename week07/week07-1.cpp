///(�g��@�b) week07-1.cpp �ǲ߭p�eSimulation�ĤT�D ���r�C��
///LeetCode 1275. Find Winner on a Tic Tac Toe Game
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
        int board[3][3]={};///�̭�����0
        ///for(vector<int> move{�쥻��2���}�C�A���X1���}�C
            for(auto move : moves){///�� auto �L�|���p�g�n
                int i = move[0], j = move[1];
                board[i][j] = 1;
                myPrintBoard(board);
        }
        return "A"; ///�ӧQ���O��?
    }
};
