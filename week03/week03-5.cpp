//week03-5.cpp學習計畫第五題 判斷某個字母,是不是由[重覆]做出來的字串
//LeetCode 459. Repeated Substring Pattern
//abcabcabcabc
//abcabcabcabcabcabcabcabc 把它copy兩次
// bcabcabcabcabcabcabcab 頭尾 都 砍掉1個字母
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; //把它copy兩次
        int N = s2.length(); //心得長度 N
        return s2.substr(1, N-2).find(s) != string::npos;
    }
};
