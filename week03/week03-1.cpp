///week03-1.cpp�F��"��k�}"range-base for�j��b2011�~C++�~���
///warning: range-based 'for' loops only available with - std=c++11 or - std=
///CodeBlocks-Settings-Compler �� - std=c++11��2011�~��C++�}�_��
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


