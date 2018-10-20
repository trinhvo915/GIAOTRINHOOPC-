#include<string>;
using namespace std;
#include<iostream>
#pragma once
class Date
{
	
	int day;
	int month;
	int year;
	public:
		Date();
		Date(int, int, int);
		~Date();
		friend istream & operator >> (istream &,Date &d);
		friend ostream & operator << (ostream &, const Date &d);
		Date operator =(const Date &);
		static bool checkDate(int,int,int);
		int getDay();
		void setDay(int);
		// --------------//
		int getMonth();
		void setMonth(int);
		//--------------//
		int getYear();
		void setYear(int);
		
};

