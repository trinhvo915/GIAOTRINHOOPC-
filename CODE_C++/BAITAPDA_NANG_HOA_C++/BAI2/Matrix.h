#include<iostream>
using namespace std;
#pragma once
class Matrix
{
	int h;
	int c;
	double **p;
public:
	Matrix(int h, int c);
	~Matrix();
	Matrix(const Matrix &m);
	friend istream & operator >> (istream &in, Matrix &m);
	friend ostream & operator << (ostream &in, const Matrix &m);
	Matrix & operator = (const Matrix & m);
	friend Matrix  operator + (const Matrix & m, const Matrix & n);
	friend Matrix operator - (const Matrix & m, const Matrix & n);
	friend Matrix operator * (const Matrix & m, const Matrix & n);
	double operator ()(int i, int j);
};

