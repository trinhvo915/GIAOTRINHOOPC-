#include<iostream>
using namespace std;
#pragma once
class Vector
{
	int len;
	int *data;
public:
	Vector(int len);
	~Vector();
	Vector(const Vector &x);
	friend istream & operator >> (istream &is, Vector &v);
	friend ostream & operator <<(ostream &os, const Vector  &v);
	Vector & operator = (const Vector &x);
	friend Vector  operator + (const Vector &x, const Vector &y);
	friend Vector  operator - (Vector &x, Vector &y);
	friend Vector  operator * (Vector &x, Vector &y);
	int  &operator [] (int i);
	double &operator ^ (Vector &v);
	int getLen();
	void setLen(int len);
	int * &getData();
	void setData(int *d);

};

