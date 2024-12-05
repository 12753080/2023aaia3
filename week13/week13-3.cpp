///week13-3.cpp解 Advent of code 2024 day 1 題目
///LeetCode 右上角圖示
///new playground, +新的 playground
///input 放在右下角的stdin的標準輸入區
///前面LeetCode幫妳寫好了 #include <iostream>和#include <vector>
int main() {
    vector<int> A, B;///2個陣列(伸縮自如)
    int a, b;
    while( cin >> a >> b){///step01:input
        A.push_back(a);///step02:放到陣列
        B.push_back(b);
    }
    for(int i=0; i<A.size(); i++){///step03:output
        cout << A[i] << " ";
    }
}
