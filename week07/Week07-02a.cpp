//(�g��@�b) week07-2a.cpp �ǲ߭p�eSimulation�ĤT�D ���r�C��
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
//Ū2���}�C�A�o��i,j,�b�Х�board[i][j] =1
///1��2��1��2��1��2��1��2
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
        int board[3][3]={};//�̭�����0
        int now = 1; //��1�ӤU���H�A �s1:"A", 2:"B"
        //for(vector<int> move{�쥻��2���}�C�A���X1���}�C
            for(auto move : moves){//�� auto �L�|���p�g�n
                int i = move[0], j = move[1];
                board[i][j] = now; //�令now
                myPrintBoard(board);
                now = 3 - now; //1��2�A2��1�A1��2�A2��1
        }
        return "A"; //�ӧQ���O��?
    }
};
