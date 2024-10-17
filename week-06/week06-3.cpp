///week06-3.cpp學習計畫Simulation第二題
///LeetCode 657.Robot Return to Origin機器人有沒有回到原來的位置?
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
        for(char c : moves){
            if(c=='U')y++;///往上
            if(c=='D')y--;///往下
            if(c=='R')x++;///往右
            if(c=='L')x--;///往左
        }
        if(x==0 && y==0) return true;//還留在(0,0)就成功
        else return false;
    }
};
