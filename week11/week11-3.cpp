///week11-3.cpp�Q�ݬ� Hash Map ����Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
        unordered_map<string,int> m; ///�j�G�W[�굲�t��k]�Ъ�Hash Map�����
        m["���a��"] = 12753071;
        m["���ͨ�"] = 12753080;

        cout << "���a�Ǫ��Ǹ��O:" << m["���a��"] << endl;
        cout << "���ͨ����Ǹ��O:" << m["���ͨ�"] << endl;

}
