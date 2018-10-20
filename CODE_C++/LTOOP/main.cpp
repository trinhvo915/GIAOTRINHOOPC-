#include<iostream>
//#include"Point.h"
#include"GiangVien.h"
#include"string.h"
using namespace std;
int main() {
	/*Point p1;
	p1.setXVal(3);
	p1.setYVal(7);
	p1.getXVal();
	p1.getYVal();
	p1.Show();*/
	GiangVien gv1 ;

	GiangVien gv2(100, 2.34, 2.5, 400000);
	GiangVien gv3(gv2);
	cout << " n " 
	gv1.Show();
	system("pause");
	return 0;
}