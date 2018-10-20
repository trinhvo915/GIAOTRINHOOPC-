#include<iostream>
using namespace std;
#pragma once
class Vector
{
	int n;
	int *data;
	public:
		Vector(int n=2);
		~Vector();
		Vector(const Vector &x);
		int getN();
		void setN(int n);
		friend istream & operator >> (istream &in, Vector &vt);
		friend ostream & operator << (ostream &out, const Vector &vt);
};

