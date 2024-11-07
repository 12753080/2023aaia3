///week09-1.cpp 學習計畫 Matrix 第一題 最有錢的人， 有多少錢
/// LeetCode 1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size();
        int N = accounts[0].size();
        int ans = 0;
        for(int i=0; i<M; i++){

            int total = 0;
            for(int j=0; j<N; j++){
                total += accounts[i][j];
            }
            if(total>ans) ans = total;
        }
        return ans;
    }
};
