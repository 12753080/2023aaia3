///week13-4.cpp�� Advent of code 2024 day 1 �D��
///LeetCode �k�W���ϥ�
///new playground, +�s�� playground
///input ��b�k�U����stdin���зǿ�J��
///�e��LeetCode���p�g�n�F #include <iostream>�M#include <vector>
int main() {
    vector<int> A, B;///2�Ӱ}�C(���Y�ۦp)
    int a, b;
    while( cin >> a >> b){///step01:input
        A.push_back(a);///step02:���}�C
        B.push_back(b);
    }
    sort(A.begin(), A.end());///Steo04: sort
    sort(B.begin(), B.end());
    int ans=0;
    for(int i=0; i<A.size(); i++){///step03:output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "���׬O: " << ans;
}
