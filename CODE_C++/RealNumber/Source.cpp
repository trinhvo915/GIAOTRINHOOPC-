#include<iostream>
#include "Complex.h"
using namespace std;

int main() {
	Complex p1,p2;
	cin >> p1;
	
	cout << p1;
	cin >> p2;
	cout << p2;
	if (p1 == p2) {
		cout << "Hai so phuc bang nhau : " << endl;
	}
	else {
		cout << "Hai so phuc khong bang nhau" << endl;
	}
	cout << "Tong hai so phuc "<<endl;
	p1 += p2;
	cout << p1;
	system("pause");
	return 0;
}
