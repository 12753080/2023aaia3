///week09-2.cpp 學習計畫第二題 對角線加起來
///LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size();
        int ans = 0;
        for(int i=0; i<M; i++){
            ans += mat[i][i];
            ans += mat[i][M-1-i];
        }
        ///單數時，要扣掉中間(叉叉的交點)
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    }
};
