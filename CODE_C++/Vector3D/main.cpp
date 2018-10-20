#include<iostream>
using namespace std;
 typedef struct {
	float x;
	float y;
	float z;
} VECTOR3D;
 VECTOR3D setVector(float x, float y, float z) {
	 VECTOR3D VT;
		 VT.x = x;
		 VT.y = y;
		 VT.z = z;
	 return VT;
 }
VECTOR3D operator + (VECTOR3D A, VECTOR3D B) {
	VECTOR3D vt3D;
		vt3D.x = A.x + B.x;
		vt3D.y = A.y + B.y;
		vt3D.z = A.z + B.z;
	return vt3D;
}
VECTOR3D operator - (VECTOR3D A, VECTOR3D B) {
	VECTOR3D vt3D;
		vt3D.x = A.x - B.x;
		vt3D.y = A.y - B.y;
		vt3D.z = A.z - B.z;
	return vt3D;
}
VECTOR3D operator * (VECTOR3D A, VECTOR3D B) {
	VECTOR3D vt3D;
		vt3D.x = A.x * B.x;
		vt3D.y = A.y * B.y;
		vt3D.z = A.z * B.z;
	return vt3D;
}
VECTOR3D operator / (VECTOR3D A, VECTOR3D B) {
	VECTOR3D vt3D;
		vt3D.x = A.x / B.x;
		vt3D.y = A.y / B.y;
		vt3D.z = A.z / B.z;
	return vt3D;
}
VECTOR3D InputVector(char N) {
	int x, y, z;
	cout << "Moi ban nhap vector " << N << "= "<< endl;
	cout << "Moi ban nhap vao hoanh do " << N << ".x = ";
	cin >> x;
	cout << "Moi ban nhap vao tung do " << N << ".y = ";
	cin >> y;
	cout << "Moi ban nhap vao cao do " << N << ".z = ";
	cin >> z;
	VECTOR3D vt = setVector(x,y,z);
	return vt;
}
void DisplayVector3D(VECTOR3D M, char N) {
	cout << "Xuat Vector 3D " << N << endl;
	cout << N << "( " << M.x << ", " << M.y << ", " << M.z << ")" <<endl;
}
void Menu() {
	cout << " ---------------------------------" << endl;
	cout << "\t1. Cong Vector 3D " << endl;
	cout << "\t2. Tru Vector 3D " << endl;
	cout << "\t3. Nhan Vector 3D " << endl;
	cout << "\t4. Chia Vector 3D " << endl;
	cout << " ---------------------------------" << endl;
}
int main() {
	while (true) {
		VECTOR3D A, B,C;
		char X = 'X', Y = 'Y', Z = 'Z';
		A = InputVector(X);
		DisplayVector3D(A, X);
		B = InputVector(Y);
		DisplayVector3D(B, Y);

		Menu();
		int chucnang;
		cout << "Moi ban chon chuc nang " << endl;
		cin >> chucnang;
		switch (chucnang) {
			case 1: {
					C = A + B;
					cout << "Tong 2 Vector " << X << " + " << Y << endl;
					DisplayVector3D(C, Z);
					break;
				}
			case 2: {
				C = A - B;
				cout << "Hieu 2 Vector " << X << " + " << Y << endl;
				DisplayVector3D(C, Z);
				break;
			}
			case 3: {
				C = A * B;
				cout << "Tich 2 Vector " << X << " + " << Y << endl;
				DisplayVector3D(C, Z);
				break;
			}
			case 4: {
				C = A / B;
				cout << "Thuong 2 Vector " << X << " + " << Y << endl;
				DisplayVector3D(C, Z);
				break;
			}
		}
		cout << " Ban co muon thoat chuong trinh (y/n)";
		char m;
		cin >> m;
		if (m == 'y' || m == 'Y') {
			break;
		}
	}
	system("pause");
	return 0;
}
