#include<iostream>
using namespace std;
#pragma once
class Polynomial
{
	int cap;
	double *data;
public:
	Polynomial(int cap);
	~Polynomial();
	Polynomial & operator = (const Polynomial &x);
	friend istream & operator >> (istream & in, Polynomial &p);
	friend ostream & operator << (ostream & out, Polynomial &p);
	friend Polynomial  operator + (Polynomial & x, Polynomial &y);
	friend Polynomial  operator - (Polynomial & x, Polynomial &y);
	friend Polynomial  operator * (Polynomial & x, Polynomial &y);
	double  &operator [] (int i);
	double & operator ()(double x);
	int getCap();
	void setCap(int cap);
	double *getData();
	void setData(double *dataCopy);
};

