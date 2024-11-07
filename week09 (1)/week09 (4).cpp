///week09-5.cpp 學習計畫Math第一題 (頭尾包含)範圍內，有幾個[單數]
///LeetCode 1523.. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
