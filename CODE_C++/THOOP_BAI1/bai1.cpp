#include<iostream>
#include<string>;
using namespace std;
const int MAX = 100;
int *Nhap(int &n) {
	cout << "Moi ban nhap so luong phan tu mang ..." << endl;
	cin >> n;
	int *p = new int [n];
	for (int i = 0; i < n; i++) {
		cout << "P [" << i << "] = ";
		cin >> *(p + i); //
		cout << endl;
	}
	return p;
}
// 
void Xuat(int *p,int n) {
	for (int i = 0; i < n; i++) {
		cout << *(p + i) << "  ";
	}
	cout << endl;
}
bool GD(int left, int right) {
	return left > right;
}
bool TD(int left, int right) {
	return left < right;
}
void Swap(int &x, int &y) {
	int tam;
	tam = x;
	x = y;
	y = tam;
}
void SelectionSort(int *p, int n, bool (*q) (int, int)) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (q(*(p + i), *(p + j))) {
				Swap(*(p + i), *(p + j));
			}
		}
	}
}
int *insert(int *p ,int &n, int x) {
	for (int i = 0; i < n; i++) {
		if (*(p + i) > x) { // <=
			for (int j = n ; j <i ; j--) {
				*(p + j) = *(p + j -1);
			}
			*(p + i) = x;


			n++;
			break;
		}
		else {
			*(p + n)= x;
			n++;
			break;
		}
	}
	
	return p;
}
int main() {
	//int *q ,n, *k;
	//q = Nhap(n);
	//cout << "Output Array ...." << endl;
	//Xuat(q,n);
	//cout << "Sap xep tang dan .." << endl;
	//SelectionSort(q,n,TD);
	//Xuat(q, n);
	///*cout << "Sap xep giam dan .." << endl;
	//SelectionSort(q, n, GD);
	//Xuat(q, n);*/
	//int x;
	//cout << "Nhap gia tri can chen ..." << endl;
	//cin >> x;
	//k =  insert(q,n,x);
	//cout << "Mang sau khi chen .. " << endl;
	//Xuat(k, n);
	string a = "aaaaaaaaaa";
	string b = a;
	cout << b;
	system("pause");
	return 0;
}