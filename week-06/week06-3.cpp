///week06-3.cpp�ǲ߭p�eSimulation�ĤG�D
///LeetCode 657.Robot Return to Origin�����H���S���^���Ӫ���m?
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
        for(char c : moves){
            if(c=='U')y++;///���W
            if(c=='D')y--;///���U
            if(c=='R')x++;///���k
            if(c=='L')x--;///����
        }
        if(x==0 && y==0) return true;//�ٯd�b(0,0)�N���\
        else return false;
    }
};
