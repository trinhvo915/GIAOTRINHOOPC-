#include<string>;
using namespace std;
#include<iostream>
#include"Date.h";
#pragma once

class PhongKS
{
	string maP;
	int soNguoi;
	bool tinhTrang;
	Date ngayNhanP;
	Date ngayTraP;
	double giaP;

	public:
		PhongKS();
		~PhongKS();
		PhongKS(string maP, int soNguoi, bool tinhTrang,
			Date ngayNhanP, Date ngayTraP, double giaP);
		PhongKS(const PhongKS &);
		PhongKS operator =(const PhongKS &);
		friend istream & operator >> (istream &, PhongKS &);
		friend ostream & operator <<(ostream &, const PhongKS &);
		string getMaP();
		void setMaP(string maP);
		int getSoNguoi();
		void setSoNguoi(int soNguoi);
		bool getTinhTrang();
		void setTinhTrang(bool status);
		Date getNgayNhanP();
		void setNgayNhanP(Date ngayN);
		Date getNgayTraP();
		void setNgayTraP(Date ngayT);
		double getGiaP();
		void setGiaP(double gia);
		
};

