#include<iostream>
#include"Vector.h"
#include"Matrix.h"
#include"String.h";
#include"Polynomial.h"
using namespace std;
void MenuVector() {
	cout << " ============== VECTOR ==============" << endl;
	cout << "\t1. Nhap 1 Vector - Xuat 1 Vector !!!" << endl;
	cout << "\t2. Gan Vector !!! " << endl;
	cout << "\t3. Cong 2 Vector !!!" << endl;
	cout << "\t4. Tru 2 Vector !!!" << endl;
	cout << "\t5. Nhan 2 Vector !!!" << endl;
	cout << "\t6. Truy xuat toa do Vector !!!" << endl;
	cout << "\t7. Tinh do dai Vector !!!" << endl;
	cout << "=====================================" << endl;
}
void MenuMatrix() {
	cout << " ============== MATRIX ==============" << endl;
	cout << "\t1. Nhap 1 Matrix - Xuat 1 Matrix!!!" << endl;
	cout << "\t2. Gan Matrix !!! " << endl;
	cout << "\t3. Cong 2 Matrix !!!" << endl;
	cout << "\t4. Tru 2 Matrix !!!" << endl;
	cout << "\t5. Nhan 2 Matrix !!!" << endl;
	cout << "\t6. Truy xuat toa do Matrix !!!" << endl;
	cout << "=====================================" << endl;
}
void MenuPolynomial() {
	cout << " ============== POLYNOMIAL ==============" << endl;
	cout << "\t1. Nhap 1 Polynomial - Xuat 1 Polynomial!!!" << endl;
	cout << "\t2. Gan Polynomial !!! " << endl;
	cout << "\t3. Cong 2 Polynomial !!!" << endl;
	cout << "\t4. Tru 2 Polynomial !!!" << endl;
	cout << "\t5. Tinh gia tri da thuc !!!" << endl;
	cout << "\t6. Truy xuat toa do Polynomial !!!" << endl;
	cout << "=====================================" << endl;
}
void Menu_Object() {
	cout << "\t1. Function Matrix !!!" << endl;
	cout << "\t2. Function Vector !!!" << endl;
	cout << "\t3. Function Polynomial !!!" << endl;
}
int main() {
	while (true)
	{
		Menu_Object();
		int n0;
		cout << "Please chose a Object Function !!!" << endl;
		cin >> n0;
		switch (n0) {
			case 1: {
				while (true)
				{
					MenuMatrix();
					int n10;
					cout << "Moi ban chon chuc nang cua Matrix !!!" << endl;
					cin >> n10;
					switch (n10) {
						case 1: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : " ;
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cin >> p;
							cout << "Xuat Matrix !!!" << endl;
							cout << p;
							break;
						}
						case 2: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : ";
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cin >> p;
							cout << "Xuat Matrix !!!" << endl;
							cout << p;
							Matrix q(h, c);
							q = p; // gan ma tran
							cout << "Xuat ma tran da duoc gan !!!" << endl;
							cout << q;
							break;
						}
						case 3: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : ";
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cout << "Nhap Matrix A :" << endl;
							cin >> p;
							cout << "Xuat Matrix A !!!" << endl;
							cout << p;
							Matrix q(h, c);
							cout << "Nhap Matrix B :" << endl;
							cin >> q;
							cout << "Xuat Matrix B !!!" << endl;
							cout << q;
							Matrix k(h, c);
							k = p + q;
							cout << "Ket qua sau khi cong Matrix A va Matrix B !!!" << endl;
							cout << k;
							break;
						}
						case 4: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : ";
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cout << "Nhap Matrix A :" << endl;
							cin >> p;
							cout << "Xuat Matrix A !!!" << endl;
							cout << p;
							Matrix q(h, c);
							cout << "Nhap Matrix B :" << endl;
							cin >> q;
							cout << "Xuat Matrix B !!!" << endl;
							cout << q;
							Matrix k(h, c);
							k = p - q;
							cout << "Ket qua sau khi tru Matrix A va Matrix B !!!" << endl;
							cout << k;
							break;
						}
						case 5: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : ";
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cout << "Nhap Matrix A :" << endl;
							cin >> p;
							cout << "Xuat Matrix A !!!" << endl;
							cout << p;
							Matrix q(c, h);
							cout << "Nhap Matrix B :" << endl;
							cin >> q;
							cout << "Xuat Matrix B !!!" << endl;
							cout << q;
							Matrix k(h, h);
							k = p * q;
							cout << "Ket qua sau khi nhan Matrix A va Matrix B !!!" << endl;
							cout << k;
							break;
						}
						case 6: {
							int h, c;
							cout << "\tNhap hang Matrix !!!  : ";
							cin >> h;
							cout << "\tNhap cot Matrix !!!  : ";
							cin >> c;
							Matrix p(h, c);
							cout << "Nhap Matrix A :" << endl;
							cin >> p;
							cout << "Xuat Matrix A !!!" << endl;
							cout << p;
							int i, j;
							do {
								cout << "Nhap vi tri hang can tim (0 =< h < " << h << ")";
								cin >> i;
								cout << "Nhap vi tri cot can tim (0 =< c < " << c << ")";
								cin >> j;
							} while ((i > h || i < 0) || (j > c || j < 0));
							cout << "Phan tu hang "<<i<<" cot "<<j<<" : " <<p(i, j)<<endl;
							break;
						}
					}
					cout << " 1. Ban co muon thoat Function 1 khong ? (y/n)" << endl;
					char c;
					cin >> c;
					if (c == 'y' || c == 'Y') {
						break;
					}
				}
				break;
			}
			case 2: {
				while (true)
				{
					MenuVector();
					int n21;
					cout << "Moi ban chon chuc nang cua Vector !!!" << endl;
					cin >> n21;
					switch (n21)
					{
						case 1 :{
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout <<"\tX "<< v << endl;
							break;
						}
						case 2: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							Vector u(n);
							u = v;
							cout << "Xuat Vector Da Duoc Gan Y = X !!!" << endl;
							cout << "\tY " << u << endl;
							break;
						}
						case 3: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							Vector u(n);
							cin >> u;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tY " << u << endl;
							Vector z(n);
							z = u + v;
							cout << "\tXuat Tong Vector X + Y = Z!!!" << endl;
							cout << "\tZ " << z << endl;
							break;
						}
						case 4: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							Vector u(n);
							cin >> u;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tY " << u << endl;
							Vector z(n);
							z = v - u;
							cout << "\tXuat Hieu Vector X - Y = Z!!!" << endl;
							cout << "\tZ " << z << endl;
							break;
						}
						case 5: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							Vector u(n);
							cin >> u;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tY " << u << endl;
							Vector z(n);
							z = u * v;
							cout << "\tXuat Nhan Vector X * Y = Z!!!" << endl;
							cout << "\tZ " << z << endl;
							break;
						}
						case 6: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n; cout << endl;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							int i;
							do {
								cout << "Nhap vi tri toa do cua Vector X ( 0 =< i "<<"< "<<n<<")" << endl;
								cin >> i;
							} while ( i >= n || i < 0);
							cout << "Xuat vi tri toa do thu "<<i<<" cua Vectoc X :" <<v[i]<<endl;

							break;
						}
						case 7: {
							int n;
							cout << "Moi so luong toa do cua vector : ";
							cin >> n;
							Vector v(n);
							cin >> v;
							cout << "\tXuat Vector !!!" << endl;
							cout << "\tX " << v << endl;
							double k = v ^ (v);
							cout << "Do dai Vectoc X : " << k << endl;
							break;
						}
						default:
							break;
					}
					cout << " 2. Ban co muon thoat Function Vector khong ? (y/n)" << endl;
					char c;
					cin >> c;
					if (c == 'y' || c == 'Y') {
						break;
					}
				}
				break;
			}
			case 3: {
				while (true)
				{
					MenuPolynomial();
					int n31;
					cout << "Moi ban chon chuc nang cua Vector !!!" << endl;
					cin >> n31;
					switch (n31)
					{
						case 1: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc " << endl;
							cin >> p;
							cout << "Xuat da thuc " << endl;
							cout << p << endl;
							break;
						}
						case 2: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc !!!" << endl;
							cin >> p;
							cout << "Xuat da thuc !!!" << endl;
							cout << p << endl;
							Polynomial q(cap);
							q = p;
							cout << "Xuat da thuc sau khi duoc gan !!! " << endl;
							cout << q <<endl; 
							break;
						}
						case 3: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc thu 1 !!!" << endl;
							cin >> p;
							cout << "Xuat da thuc thu 1 !!!" << endl;
							cout << p << endl;
							int cap1;
							cout << "Nhap cap cua da thuc thu 2!!!";
							cin >> cap1;
							Polynomial q(cap1);
							cout << "Nhap da thuc thu 2 !!!" << endl;
							cin >> q;
							cout << "Xuat da thuc thu 2 !!!" << endl;
							cout << q << endl;
							if (cap > cap1) {
								Polynomial sum(cap);
								sum = p + q;
								cout << "Xuat tong cua 2 da thuc !!!" << endl;
								cout << sum << endl;
							}
							else {
								Polynomial sum(cap1);
								sum = p + q;
								cout << "Xuat tong cua 2 da thuc !!!" << endl;
								cout << sum << endl;
							}
							break;
						}
						case 4: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc thu 1 !!!" << endl;
							cin >> p;
							cout << "Xuat da thuc thu 1 !!!" << endl;
							cout << p << endl;
							int cap1;
							cout << "Nhap cap cua da thuc thu 2!!!";
							cin >> cap1;
							Polynomial q(cap1);
							cout << "Nhap da thuc thu 2 !!!" << endl;
							cin >> q;
							cout << "Xuat da thuc thu 2 !!!" << endl;
							cout << q << endl;
							if (cap > cap1) {
								Polynomial sum(cap);
								sum = p - q;
								cout << "Xuat hieu cua 2 da thuc !!!" << endl;
								cout << sum << endl;
							}
							else {
								Polynomial sum(cap1);
								sum = p - q;
								cout << "Xuat hieu cua 2 da thuc !!!" << endl;
								cout << sum << endl;
							}
							break;
						}
						case 5: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc " << endl;
							cin >> p;
							cout << "Xuat da thuc " << endl;
							cout << p << endl;
							double x;
							cout << "Nhap gia tri de tinh da thuc !!!" << endl;
							cin >> x;
							double result = p(x);
							cout << "Ket qua tinh da thuc f(" << x <<") = "<< result<<endl;
							break;
						}
						case 6: {
							int cap;
							cout << "Nhap cap cua da thuc !!!";
							cin >> cap;
							Polynomial p(cap);
							cout << "Nhap da thuc " << endl;
							cin >> p;
							cout << "Xuat da thuc " << endl;
							cout << p << endl;
							int j;
							do {
								cout << "Nhap vi tri he so cua da thuc (0 =< i <"<<cap<<" )" << endl;
								cin >> j;
							} while (j >= cap || j < 0);
							cout << "xuat phan tu tai vi tri "<<j <<" : " << p[j] << endl;
							break;
						}
						default:
							break;
					}
					cout << " 3. Ban co muon thoat Function Polynomial khong ? (y/n)" << endl;
					char c;
					cin >> c;
					if (c == 'y' || c == 'Y') {
						break;
					}
				}
				break;
			}
		}

		cout << "Ban co muon thoat chuong trinh khong ? (y/n)"<<endl;
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y') {
			break;
		}
	}
	system("pause");
	return 0;
}