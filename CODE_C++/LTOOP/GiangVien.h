#pragma once
class GiangVien
{
	
	private :
		int cmnd;
		double hesoluong; // 2.34 - >10
		double luong;
		double hesophucap;//  0 < hesoluong < 2
		// luong = (hesoluong + hesophucap)*luong
		
	public:
		double TinhLuong();
		static int n;
		const int x = 2;
		GiangVien();
		~GiangVien();
		// ham sao chep
		GiangVien(const GiangVien &gv);
		////////
		int getCmnd();
		void setCmnd(int cmnd);
		double getHesoluong();
		void setHesoluong(double hesoluong);
		double getLuong();
		void setLuong(double luong);
		double getHesophucap();
		void setHesophucap(double hesophucap);
		GiangVien(int cmnd, double hesoluong, double hesophucap, double luong); //
		GiangVien(int cmnd,double hesoluong,double hesophucap); //,double luong
		void Show();
		
};

