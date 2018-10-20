#include "GiangVien.h"
#include<iostream>
using namespace std;

GiangVien::GiangVien()
{
}


GiangVien::~GiangVien()
{
	this->n--;
}
int GiangVien::n = 0;

GiangVien::GiangVien(int cmnd, double hesoluong, double hesophucap)//, double luong
{
	this->cmnd = cmnd;
	this->hesoluong = hesoluong;
	this->hesophucap = hesophucap;
	this->hesoluong = hesoluong;
	this->n++;
}
GiangVien::GiangVien(int cmnd, double hesoluong, double hesophucap,double luong)//, double luong
 :cmnd(cmnd),hesoluong(hesoluong),hesophucap(hesophucap)
{
	/*this->cmnd = cmnd;
	this->hesoluong = hesoluong;
	this->hesophucap = hesophucap;
	this->luong = luong;
	this->hesoluong = hesoluong;*/
	//this->TinhLuong() = TinhLuong();
	this->luong = luong;
}
GiangVien :: GiangVien(const GiangVien &gv) {
	this->cmnd = gv.cmnd;
	this->hesoluong = gv.hesoluong;
	this->hesophucap = gv.hesophucap;
	this->luong = gv.luong;
	this->hesoluong = gv.hesoluong;
	this->n++;
}
int GiangVien::getCmnd() {
	return this->cmnd;
}
void GiangVien:: setCmnd(int cmnd) {
	this->cmnd = cmnd;
}
double GiangVien:: getHesoluong() {
	return this->hesoluong;
}
void GiangVien:: setHesoluong(double hesoluong) {
	if (hesoluong > 0 && hesoluong < 2) {
		this->hesoluong = hesoluong;
	}
	else
	{
		cout << "He So luong nam trong 0 < hesoluong < 10" << endl;
	}
}
double GiangVien:: getLuong() {
	return this->luong;
}
void GiangVien:: setLuong(double luong) {
	this->luong = luong;
}
double GiangVien:: getHesophucap() {
	return this->hesophucap;
}
void GiangVien:: setHesophucap(double hesophucap) {
	if (hesophucap >= 2.34 && hesoluong <= 10) {
		this->hesophucap = hesophucap;
	}
	else
	{
		cout << "He So phu cap nam trong 2.34 <=  hesophucap <= 10" << endl;
	}
	
}
double GiangVien::TinhLuong() {
	return (this->hesoluong + this->hesophucap)*this->luong;
}
void GiangVien::Show() {
	cout << "CMDN = " << this->cmnd << " ; He So Luong = " << this->hesoluong
		<< "; He So Phu Cap = " << this->hesophucap << "; Luong = " << this->TinhLuong() << endl;
}

