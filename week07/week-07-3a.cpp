///(LeetCode�G�X�@)
///week-3a.cpp�ǲ߭p�eSimulation �ĤG�D(�A�g�@��)
///LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
     int x=0, y=0;
     for(char c : moves){
        if(c=='U') y--;
        if(c=='D') y++;
        if(c=='L') x--;
        if(c=='R') x++;
     }
     if(x==0 && y==0) return true;
     else return false;
    }
};
