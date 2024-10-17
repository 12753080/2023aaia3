///week06-4.cpp厩策璸礶Simulation材肈
///LeetCode 682.Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N = a.size();///皚ΤaN计
            if(s=="+")a.push_back(a[N-1]+a[N-2]);
            else if(s=="D")a.push_back(a[N-1]*2);
            else if(s=="C")a.pop_back();
            else a.push_back( stoi(s) );
        }
        int ans = 0; ///程р皚场癬ㄓ
        for(int b : a) ans += b;
        return ans;
    }
};
