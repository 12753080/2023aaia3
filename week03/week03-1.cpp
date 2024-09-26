///week03-1.cpp了解"文法糖"range-base for迴圈在2011年C++才能用
///warning: range-based 'for' loops only available with - std=c++11 or - std=
///CodeBlocks-Settings-Compler 把 - std=c++11的2011年的C++開起來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){
        cout << c << "\n";
    }
}


