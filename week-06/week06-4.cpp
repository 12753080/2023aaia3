///week06-4.cpp�ǲ߭p�eSimulation�Ĥ@�D
///LeetCode 682.Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N = a.size();///�}�C��a��N�Ӽ�
            if(s=="+")a.push_back(a[N-1]+a[N-2]);
            else if(s=="D")a.push_back(a[N-1]*2);
            else if(s=="C")a.pop_back();
            else a.push_back( stoi(s) );
        }
        int ans = 0; ///�̫��}�C�����[�_��
        for(int b : a) ans += b;
        return ans;
    }
};
