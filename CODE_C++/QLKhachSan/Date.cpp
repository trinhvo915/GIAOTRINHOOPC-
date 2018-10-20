#include "Date.h"
#include<string>;
#include<iostream>
using namespace std;

Date::Date()
{
}
Date::Date(int day, int month, int year){
	this->day = day;
	this->month = month;
	this->year = year;
}
Date::~Date()
{
}
bool Date::checkDate(int day, int month, int year) {
	if (day > 32 || day < 0) {
		cout << "Please input day (1 <= day <= 31) ..." << endl;
		return true;
	}
	// check năm nhuận //
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day > 31 || day < 1) {
				cout << "\tPlease input month " << month << "(1 <= day <= 31).." << endl;
				return true;
			}
		}
		else if (month == 2) {
			if (day < 1 || day >29) {
				cout << "\tPlease input month " << month << "(1 <= day <= 29).." << endl;
				return true;
			}
		}
		else {
			if (day > 30 || day < 1) {
				cout << "\tPlease input month " << month << "(1 <= day <= 30).." << endl;
				return true;
			}
		}
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day > 31 || day < 1) {
				cout << "\tPlease input month " << month << "(1 <= day <= 31).." << endl;
				return true;
			}
		}
		else if (month == 2) {
			if (day < 1 || day >28) {
				cout << "\tPlease input month " << month << "(1 <= day <= 28).." << endl;
				return true;
			}
		}
		else {
			if (day > 30 || day < 1) {
				cout << "\tPlease input month " << month << "(1 <= day <= 30).." << endl;
				return true;
			}
		}
	}
	
	return false;
}
istream & operator >> (istream & in, Date &d) {
	int day, month, year;
	bool check = false;
	do {
		if (check == true) {
			cout << "\tBan da nhap sai hay nhap lai dung dinh dang ngay thang nam ..." << endl;
		}
		check = false;
		cout << "\n\tPlease input year (year >= 2000): ";
		in >> d.year; //cout << endl;
		year = d.year;
		cout << "\n\tPlease input month : ";
		in >> d.month;// cout << endl;
		month = d.month;
		cout << "\n\tPlease input day : ";
		in >> d.day;
		day = d.day;
		Date date;
		if (year <= 2000) {
			cout << "\tPlease input year > 2000 ..." << endl;
			check = true;
		}
		if (month > 12 || month < 1) {
			cout << "\tBan phai nha thang tu 1 => 12 ..." << endl;
			check = true;
		}

		bool check1 = date.checkDate(day, month, year);
		if (check1 == true) {
			check = true;
		}
	} while (check == true);
	return in;
}
// -------------------//
ostream & operator << (ostream &out, const Date &d) {
	out << d.day << "/" << d.month << "/" << d.year;
	return out;
}

Date Date::operator =(const Date &d) {
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;
	return *this;
}
// --------------//
int Date::getDay() {
	return this->day;
}
void Date::setDay(int day) {
	this->day = day;
}
/// ----------------///
int Date::getMonth() {
	return this->month;
}
void Date::setMonth(int month) {
	this->month= month;
}
/// ----------------///
int Date::getYear() {
	return this->year;
}
void Date::setYear(int year) {
	this->year = year;
}
