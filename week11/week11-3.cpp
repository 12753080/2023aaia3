///week11-3.cpp想看看 Hash Map 的對照表強處
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
        unordered_map<string,int> m; ///大二上[資結演算法]教的Hash Map雜湊表
        m["黃冠傑"] = 12753071;
        m["蔡凱辰"] = 12753080;

        cout << "黃冠傑的學號是:" << m["黃冠傑"] << endl;
        cout << "蔡凱辰的學號是:" << m["蔡凱辰"] << endl;

}
