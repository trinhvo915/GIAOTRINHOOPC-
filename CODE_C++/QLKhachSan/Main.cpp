#include "ListManagerKS.h"
#include "PhongKS.h"
#include<iostream>
#include<string>;
#include "Date.h"
using namespace std;
void MenuMain() {
	cout << " =================== MENU ====================" << endl;
	cout << "\t1. Hien Thi Danh Sach" << endl;
	cout << "\t2. Them Doi Tuong" << endl;
	cout << "\t3. Cap Nhat Doi Tuong" << endl;
	cout << "\t4. Xoa Doi Tuong " << endl;
	cout << "\t5. Tim Kiem Doi Tuong Theo Ma Phong bang Binary Search " << endl;
	cout << "\t6 . Sap xep Danh Sach Theo Gia Phong Bang Merge Sort " << endl;
	cout << " ==============================================" << endl;
}
void menuDelete() {
	cout << "\t\t1. Xoa Dau Danh Sach " << endl;
	cout << "\t\t2. Xoa Cuoi Danh Sach " << endl;
	cout << "\t\t3. Xoa Vi Tri Bat Ky Danh Sach " << endl;
}
void menuAddition() {
	cout << "\t\t1. Them Dau Danh Sach " << endl;
	cout << "\t\t2. Them Cuoi Danh Sach" << endl;
	cout << "\t\t3. Them Vi Tri Bat Ky Danh Sach " << endl;
}
bool tang(double a, double b) {
	return (a<b)?true:false;
}
bool giam(double a, double b) {
	return a>b?true:false;
}
int main() {
	cout << "De bat chay chuong trinh ban hay nhap 2 du lieu de hien thi ket qua ..." << endl;
	ListManagerKS list(2);
	list.InputList();
	PhongKS p;
	while (true) {
		MenuMain();
		int chose;
		cout << "Moi ban chon chuc nang !!! ";
		cin >> chose; cout << endl;
		switch (chose) {
			case 1: {
				list.ShowListKS();
				break;
			}
			case 2: {
				menuAddition();
				cout << "Moi ban chon vi tri them ";
				int chose; cout << endl;
				cin >> chose;
				switch (chose) {
					case 1: {
						cout << "\nMoi ban nhap tung gia tri cua phong can them"<<endl;
						cin.ignore();
						cin >> p; cout << endl;
						list.AddHeadPhongKS(p);
						break;
					}
					case 2: {
						cout << "\nMoi ban nhap tung gia tri cua phong can them "<<endl;
						cin.ignore();
						cin >> p; cout << endl;
						list.AddTailPhongKS(p);
						break;
					}
					case 3: {int k;
						cout << "Moi ban chon vi tri can them : " ;
						cin >> k; cout << endl;
						cout << "Moi ban nhap tung gia tri cua phong can them"<<endl;
						cin.ignore();
						cin >> p; cout << endl;
						list.AddPhongKS(p,k);
						break;
					}
				}
				break;
			}
			case 3: {
				cout << "Nhap ma phong can update !!!";
				string ma; cin >> ma; cout << endl;
				list.Update(ma);
				break;
			}
			case 4: {
				menuDelete();
				cout << "Moi ban chon chuc nang xoa : ";
				int chose; cout << endl;
				cin >> chose;
				switch (chose) {
					case 1: {
						list.DeleteHeadPhongKS();
						break;
					}
					case 2: {
						list.DeleteTailPhongKS();
						break;
					}
					case 3: {
						cout << "Nhap vi tri can xoa !!!";
						int index; cin >> index; cout << endl;
						list.DeletePhongKS(index);
						break;
					}
				}
				break;
			}
			case 5: {
				cout << "Nhap ma can tim kiem !!!";
				string ma; cin >> ma; cout << endl;
				PhongKS *pSearch;
				pSearch = list.BinarySearchPhongKS(ma);
				if (pSearch != NULL) {
					cout << "Tim thay " << ma << " trong he thong ..." << endl;
					cout << " ________________________________________________________________________________________" << endl;
					cout << "| Ma Phong | So Nguoi |  Ngay Nhan P  |   Ngay Tra P    | Tinh Trang P |  Gia Phong     |" << endl;
					cout << "|__________|__________|_______________|_________________|______________|________________|" << endl;
					cout << *pSearch <<endl;
				}
				else {
					cout << "\tKhong ton tai ma ban tim kiem trong he thong ..." << endl;
				}
				break;
			}
			case 6: {
				/*int l = 0, r = list.getN();
				list.MergeSortPhongKS(l, r,tang);*/
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}
