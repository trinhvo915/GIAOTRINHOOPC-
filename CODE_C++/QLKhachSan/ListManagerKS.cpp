#include "ListManagerKS.h"
#include "PhongKS.h"
#include<iostream>
#include<string>;
#include "Date.h"
using namespace std;
void ListManagerKS::setN(int n) {
	this->n = n;
}
int ListManagerKS::getN() {
	return this->n;
}
void ListManagerKS::setListP(PhongKS *listP) {
	this->listP = listP;
}
PhongKS *ListManagerKS::getListP() {
	return this->listP;
}
// contructor mac dinh
ListManagerKS::ListManagerKS()
{
}
// contructor co doi so int size
ListManagerKS::ListManagerKS(int size){
	this->n = size;
	this->listP = new PhongKS[this->n];
}
// ham huy
ListManagerKS::~ListManagerKS()
{
	delete[] this->listP;
}
// sao chep
ListManagerKS::ListManagerKS(const ListManagerKS &data) {
	this->n = data.n;
	this->listP = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		listP[i] = data.listP[i];
	}
}
//operator []
PhongKS &ListManagerKS::operator [](const int i) {
	static PhongKS temp ;
	return (i >= 0 && i < this->n) ? *(this->listP + i) : temp;
}
// Ham nhap du lieu
void ListManagerKS::InputList() {
	for (int i = 0; i < this->n; i++) {
		cout << "Nhap Phong thu " << i+1 << endl;
		cin >> this->listP[i];
	}
}
// ham them dau danh sach
void ListManagerKS::AddHeadPhongKS(PhongKS &p) {
	PhongKS *p1 = new PhongKS[this->n];
	// sao chép data//
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	// =================//
	delete[] this->listP;
	this->n++;
	listP = new PhongKS[this->n];
	// Additon into ahead of list//
	for (int i = 0; i < this->n; i++) {
		if (i == 0) {
			this->listP[0] = p;
			continue;
		}
		this->listP[i] = p1[i-1];
	}
	// ===================//
	
}
// ham them cuoi danh sach
void ListManagerKS::AddTailPhongKS(PhongKS &p) {
	PhongKS *p1 = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	delete[] this->listP;
	this->n++;
	listP = new PhongKS[this->n];
	for (int i = 0; i < this->n -1; i++) {
		this->listP[i] = p1[i];
	}
	this->listP[this->n -1] = p;
}
// ham them vi tri bat ki trong danh sach
void ListManagerKS::AddPhongKS(PhongKS &p, int k) {
	PhongKS *p1 = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	delete[] this->listP;
	this->n++;
	listP = new PhongKS[this->n];
	bool check = false;
	for (int i = 0; i < this->n; i++) {
		if (i == k) {
			this->listP[i] = p;
			check = true;
			continue;
		}
		if (check == false) {
			this->listP[i] = p1[i];
		}else {
			this->listP[i] = p1[i-1];
			check = true;
		}
	}
}
// ham hien thi danh sach
void ListManagerKS::ShowListKS() {
	cout << " ________________________________________________________________________________________" << endl;
	cout << "| Ma Phong | So Nguoi |  Ngay Nhan P  |   Ngay Tra P    | Tinh Trang P |  Gia Phong     |" << endl;
	cout << "|__________|__________|_______________|_________________|______________|________________|" << endl;

	for (int i = 0; i < this->n; i++) {
		cout << *(this->listP + i)<<endl;
	}
}
// ham cap nhat danh sach theo ma
void ListManagerKS::Update(string maP) {
	int songuoi; bool tinhTrang; Date ngayNhanP; Date ngayTraP; double giaP;
	for (int i = 0; i < n; i++) {
		if ((this->listP + i)->getMaP() == maP) {
			// lay ma ko cho sưa mã - mã là key duy nhất không được sủa //
			(this->listP + i)->getMaP();
			cout << "\nCap nhat lai ma phong  - 1{(1=>5)}_4{(0=>9)} :  " << (this->listP + i)->getMaP();
			cout << "\nMoi ban nhap lai so nguoi (1=>4) : ";
			cin >> songuoi;
			(this->listP + i)->setSoNguoi(songuoi);
			cout << "\n Moi ban nhap lai tinh trang (input 1 DATE NULL)-(input 0 DATE != NULL) : ";
			cin >> tinhTrang;
			if (tinhTrang == 0)
			{
				(this->listP + i)->setTinhTrang(tinhTrang);
				cout << "\nMoi ban nhap lai ngay nhan phong : ";
				cin >> ngayNhanP;
				(this->listP + i)->setNgayNhanP(ngayNhanP);
				cout << "\nMoi ban nhap lai ngay tra phong : ";
				cin >> ngayTraP;
				(this->listP + i)->setNgayTraP(ngayTraP);
			}
			cout << "\nMoi ban nhap lai gia phong : ";
			cin >> giaP;
			(this->listP + i)->setGiaP(giaP); cout << endl;
			break;
		}
		else {
			cout << "Ma phong " <<maP<<" can Update khong ton tai trong he thong ..." << endl;
		}
	}
}
// ham xoa dau danh sach
void ListManagerKS::DeleteHeadPhongKS() {
	PhongKS *p1 = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	delete[] this->listP;
	this->n--;
	listP = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		this->listP[i] = p1[i+1];
	}
}
// ham xoa cuoi danh sach
void ListManagerKS::DeleteTailPhongKS() {
	PhongKS *p1 = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	delete[] this->listP;
	this->n--;
	listP = new PhongKS[this->n];
	for (int i = 0; i < this->n -1; i++) {
		this->listP[i] = p1[i];
	}
}
// ham xoa vi tri bat ki trong danh sach
void ListManagerKS::DeletePhongKS(int k) {
	PhongKS *p1 = new PhongKS[this->n];
	for (int i = 0; i < this->n; i++) {
		p1[i] = this->listP[i];
	}
	delete[] this->listP;
	this->n--;
	listP = new PhongKS[this->n];
	// check là cờ hiệu kiểm tra vi tri thứ K//
	bool check = false;
	for (int i = 0; i < this->n; i++) {
		if (i == k) {
			check = true;
		}
		if (check == false) {
			this->listP[i] = p1[i];
		}
		else {
			this->listP[i] = p1[i + 1];
			check = true;
		}
	}
}
// ham tim kiem theo BinarySearch
PhongKS *ListManagerKS::BinarySearchPhongKS(string ma) {
	// săp xếp chuoi string
	for (int i = 0; i < this->n -1; i++) {
		for (int j = i+1; j < this->n; j++) {
			if (this->listP[i].getMaP()[0] > this->listP[j].getMaP()[0]) {
				PhongKS temp = this->listP[i];
				this->listP[i] = this->listP[j];
				this->listP[j] = temp;
			}
			else if (this->listP[i].getMaP()[0] == this->listP[j].getMaP()[0]) {
				if (this->listP[i].getMaP()[1] > this->listP[j].getMaP()[1]) {
					PhongKS temp = this->listP[i];
					this->listP[i] = this->listP[j];
					this->listP[j] = temp;
				}
				else if (this->listP[i].getMaP()[1] == this->listP[j].getMaP()[1]) {
					if (this->listP[i].getMaP()[2] > this->listP[j].getMaP()[2]) {
						PhongKS temp = this->listP[i];
						this->listP[i] = this->listP[j];
						this->listP[j] = temp;
					}
					else if (this->listP[i].getMaP()[2] == this->listP[j].getMaP()[2]) {
						if (this->listP[i].getMaP()[3] > this->listP[j].getMaP()[3]) {
							PhongKS temp = this->listP[i];
							this->listP[i] = this->listP[j];
							this->listP[j] = temp;
						}
						else if (this->listP[i].getMaP()[3] == this->listP[j].getMaP()[3]) {
							if (this->listP[i].getMaP()[4] > this->listP[j].getMaP()[4]) {
								PhongKS temp = this->listP[i];
								this->listP[i] = this->listP[j];
								this->listP[j] = temp;
							}
						}
					}
				}
			}
		}
	}
	// =====================================//
	
	// Tìm kiếm theo ma phòng //
	int left = 0; int right = this->n - 1;
	do {
		int mid = (left + right) / 2;
		if ((this->listP + mid)->getMaP() == ma) {
			return (this->listP + mid);
		}
		if ((this->listP + mid)->getMaP() > ma) {
			right = mid - 1;
		}
		else if ((this->listP + mid)->getMaP() < ma) {
			left = mid + 1;
		}

	} while (left <= right);
	// ========================================//
	return NULL;
}

void ListManagerKS::merge(int left, int mid, int right, bool(*function) (double, double))
{
	PhongKS *temp;

	int i = left;

	int j = mid + 1;
	int n = right - left + 1;
	temp = new PhongKS[n];
	int k = 0;
	while ((i < mid +1) && (j <right +1))
	{
		if (function((this->listP + i)->getGiaP(), (this->listP + j)->getGiaP())) {
			temp[k] = listP[i];
			k++; i++;
		}
		else
		{
			temp[k] = listP[j];
			k++; j++;
		}
	}
	while (i < mid +1)
	{
		temp[k] = listP[i];
		k++; i++;
	}
	while (j < right + 1)
	{
		temp[k] = listP[j];
		k++; j++;
	}
	i = left;
	delete[] this->listP;
	for (k = 0; k < n; k++) {
		listP[i] = temp[k];
		i++;
	}
	delete[] temp;
}
void ListManagerKS::MergeSortPhongKS(int left, int right, bool(*function) (double, double))
{

	if (right > left)
	{
		int mid;
		mid = (right + left) / 2;
		MergeSortPhongKS(left, mid, function);
		MergeSortPhongKS(mid + 1, right, function);
		merge(left, mid, right, function);
	}
}