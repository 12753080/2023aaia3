//week03-5.cpp�ǲ߭p�e�Ĥ��D �P�_�Y�Ӧr��,�O���O��[����]���X�Ӫ��r��
//LeetCode 459. Repeated Substring Pattern
//abcabcabcabc
//abcabcabcabcabcabcabcabc �⥦copy�⦸
// bcabcabcabcabcabcabcab �Y�� �� �屼1�Ӧr��
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; //�⥦copy�⦸
        int N = s2.length(); //�߱o���� N
        return s2.substr(1, N-2).find(s) != string::npos;
    }
};
