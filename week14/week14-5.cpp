//week14-5.cpp
#include <iostream>
using namespace std;

int main(){
	int a, b;//step01:input
	while(cin >> a >> b){
		while(a>0){//step03 : Bo Pi Fa
			cout << a << " ";
			a = a / b;
		}
		cout << "Boring!\n";
	}//Step02:output
}
