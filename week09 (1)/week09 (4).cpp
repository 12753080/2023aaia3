///week09-5.cpp �ǲ߭p�eMath�Ĥ@�D (�Y���]�t)�d�򤺡A���X��[���]
///LeetCode 1523.. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
