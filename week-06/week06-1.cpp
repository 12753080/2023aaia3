///week06-1.cpp std�X�{�n�h�� stdio.h stdlib
#include<iostream>
#include<vector>
#include <algorithm>///�n�Ϊ��t��k ex. sort()
using namespace std;

int main()
{
    vector<int>a; ///�ʺA�}�Ca�̭��˫ܦhint
    a.push_back(20);///���i�h�}�C���̸̭�
    a.push_back(30);
    a.push_back(50);
    a.push_back(10);
    for(int i=0; i<3; i++){
        cout << a[i] << "\n";///��a[i]���X��
        }
        sort(a.begin(), a.end());
        for(int i=0; i<a.size(); i++)cout << a[i] << ' ';
}
