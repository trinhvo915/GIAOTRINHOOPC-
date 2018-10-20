#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex()
{
}
Complex::Complex(double r, double i) {
	this->R = r;
	this->I = i;
}
Complex::~Complex()
{
}
istream& operator >> (istream &in, Complex &num) {
	cout << "Moi ban nhap phan thuc : " << endl;
	in >> num.R;
	cout << "Moi ban nhap phan ao : " << endl;
	in >> num.I;
	return in;
}
ostream& operator << (ostream &out, const Complex &num) {
	out << "P =" << num.R << " + " << num.I << "i" << endl;
	return out;
}
Complex Complex:: operator + (const Complex p) {
	this->R += p.R;
	this->I += p.I;
	return *this;
}
Complex Complex:: operator - (const Complex p) {
	this->R -= p.R;
	this->I -= p.I;
	return *this;
}
Complex Complex::operator += (const Complex p) {
	this->R += p.R;
	this->I += p.I;
	return *this;
}
Complex Complex:: operator -= (const Complex p) {
	this->R -= p.R;
	this->I -= p.I;
	return *this;
}
bool Complex::operator == (const Complex p) {
	if (this->R == p.R && this->I == p.I) {
		return true;
	}
	else {
		return false;
	}
}
Complex Complex::operator ++ () {
	this->R = this->R++;
	this->I = this->I++;
	return *this;
}