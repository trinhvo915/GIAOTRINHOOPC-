#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
	double R;
	double I;
public:
	Complex();
	Complex(double r, double i);
	~Complex();
	friend istream& operator >> (istream &in, Complex &num);
	friend ostream& operator << (ostream &ot, const Complex &num);
	Complex operator + (const Complex p);
	Complex operator - (const Complex p);
	Complex operator += (const Complex p);
	Complex operator -= (const Complex p);
	Complex operator ++ ();
	bool operator == (const Complex p);
};

