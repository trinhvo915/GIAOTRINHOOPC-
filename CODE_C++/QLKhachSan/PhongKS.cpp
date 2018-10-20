#include "PhongKS.h"
#include<iostream>
#include<string>;
#include <conio.h>
#include<iomanip>
using namespace std;

PhongKS::PhongKS()
{
}
PhongKS::PhongKS(const PhongKS &x) {
	
	this->soNguoi = x.soNguoi;
	this->tinhTrang = x.tinhTrang;
	this->ngayNhanP = x.ngayNhanP;
	this->ngayTraP = x.ngayTraP;
	this->giaP = x.giaP;
	this->maP = x.maP;
}
PhongKS::~PhongKS()
{
}

PhongKS PhongKS::operator = (const PhongKS &x) {
	if (this != &x) {
		 this->maP = x.maP;
		 this->soNguoi = x.soNguoi;
		 this->tinhTrang = x.tinhTrang;
		 this->ngayNhanP = x.ngayNhanP;
		 this->ngayTraP = x.ngayTraP;
		 this->giaP = x.giaP;
	 }
	return *this;
}
PhongKS::PhongKS(string maP, int soNguoi, bool tinhTrang, 
	Date ngayNhanP, Date ngayTraP, double giaP) {
	this->maP = maP;
	this->soNguoi = soNguoi;
	this->tinhTrang = tinhTrang;
	this->ngayNhanP = ngayNhanP;
	this->ngayTraP = ngayTraP;
	this->giaP = giaP;
}
istream &operator >> (istream &in, PhongKS &p) {
	int songuoi; bool tinhtrang; int len; string ma;
	bool check = false;
	do {
		if (check == true) {
			cout << "\tBan da nhap sai !!! Xin moi nhap lai ..." << endl;
		}
		check = false;
		cout << "\tPlease input room code - 1{(1=>5)}_4{(0=>9)}: ";
		getline(in, p.maP); cout << endl;
		ma = p.maP;
		len = ma.size();
		cout << "\tInput number people (1=>4) : ";
		in >> p.soNguoi; cout << endl;
		songuoi = p.soNguoi;
		cout << "\tPlease input status room (input 1 DATE NULL)-(input 0 DATE != NULL): ";
		in >> p.tinhTrang; cout << endl;
		tinhtrang = p.tinhTrang;
		if (tinhtrang == 0) 
		{
			//////////////////////////
			cout << "\tPlease input day borrows room : ";
			in >> p.ngayNhanP; cout << endl;
			cout << "\tPlease input day pays room : ";
			in >> p.ngayTraP; cout << endl;
			///////////////////
		}
		
		cout << "\tPlease input prices room : ";
		in >> p.giaP; cout << endl;
		cin.ignore();
	// ============= CHECK ===============//
		if (songuoi < 0 || songuoi > 4) {
			cout << "\tBan phai nhap so luong nguoi tu 1 => 4 " << endl;
			check = true;
		}
		//cout << (int)ma[0] -48<<endl;
		if (len == 5) {
			if ((int)ma[0] - 48 > 6 || (int)ma[0] - 48 < 0 ) {
				cout << "\tMa ki tu dau tien chay tu 1 => 5 " << endl;
				check = true;
			}
			else {
				for (int i = 1; i < len; i++) {
					if ((int)ma[i]-48 > 10 || (int)ma[i]-48 < -1) {
						check = true;
						break;
					}
				}
			}
		}
		else {
			cout << "Ma khong du 5 ky tu " << endl;
			check = true;
		}
		for (int i = 0; i < len; i++) {
			//cout << (ma[i] >= 'a' && ma[i] <= 'z') || (ma[i] >= 'A' && ma[i] <= 'Z');
			if ((ma[i] >= 'a' && ma[i] <='z')|| (ma[i] >= 'A' && ma[i] <='Z')) {
				cout << "\tMa phai la kieu SO !!! Khong phai kieU TEXT ..." << endl;
				check = true;
				break;
			}
		}
	// ============= CHECK ===============//
	} while ( check == true);
	return in;
}
ostream &operator <<(ostream &out, const PhongKS &p) {	
	if (p.tinhTrang == 0) {
		out << setw(10) << p.maP << setw(8) << p.soNguoi
			<< setw(8) << p.ngayNhanP << setw(9) << p.ngayTraP
			<< setw(14) << p.tinhTrang << setw(23) << p.giaP << endl;
	}
	else {
		out << setw(10) << p.maP << setw(8) << p.soNguoi
			<< setw(16) << "NULL" << setw(16) << "NULL"
			<< setw(14) << p.tinhTrang << setw(23) << p.giaP << endl;
	}
	return out;
}

string PhongKS::getMaP() {
	return this->maP;
}
void PhongKS::setMaP(string maP) {
	this->maP = maP;
}
int PhongKS::getSoNguoi() {
	return this->soNguoi;
}
void PhongKS::setSoNguoi(int soNguoi) {
	this->soNguoi = soNguoi;
}
bool PhongKS::getTinhTrang() {
	return this->tinhTrang;
}
void PhongKS::setTinhTrang(bool status) {
	this->tinhTrang = status;
}
Date PhongKS::getNgayNhanP() {
	return this->ngayNhanP;
}
void PhongKS::setNgayNhanP(Date ngayN) {
	this->ngayNhanP = ngayN;
}
Date PhongKS::getNgayTraP() {
	return this->ngayTraP;
}
void PhongKS::setNgayTraP(Date ngayT) {
	this->ngayTraP = ngayT;
}
double PhongKS::getGiaP() {
	return this->giaP;
}
void PhongKS::setGiaP(double gia) {
	this->giaP = gia;
}

