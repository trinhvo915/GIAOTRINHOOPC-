#include "Vector.h"
#include<iostream>
using namespace std;
// ham contructor
Vector::Vector(int len)
{
	this->len = len;
	this->data = new int[this->len];
}
// ham hủy
Vector::~Vector()
{
	delete[] this->data;
}
istream & operator >> (istream &in, Vector &v) {
	for (int i = 0; i < v.len; i++) {
		cout << "Moi ban nhat vao toa do thu :" << i << " = ";
		in >> v.data[i];
	}
	return in;
}
ostream & operator <<(ostream &os, const Vector &v) {
	os << "(";
	for (int i = 0; i < v.len; i++) {
		os << v.data[i];
		if (i != v.len - 1) {
			os << ", ";
		}
	}
	os << ")";
	return os;
}
int &Vector::operator [] (int k) {
	if (k < this->len && k >= 0) {
		return *(this->data + k);
	}
	//	return -1;
}
Vector::Vector(const Vector &x) {
	this->setLen(x.len);
	this->data = new int[this->len];
	for (int i = 0; i < this->len; i++) {
		this->data[i] = x.data[i];
	}
}
Vector & Vector::operator = (const Vector &x) {
	if (this != &x) {
		this->len = x.len;
		delete[] this->data;
		this->data = new int[this->len];
		for (int i = 0; i < this->len; i++) {
			this->data[i] = x.data[i];
		}
	}
	return *this;
}
Vector operator + (const Vector &x, const Vector &y) {
	int n = x.len;
	Vector h(n);

	for (int i = 0; i < n; i++) {
		h.data[i] = x.data[i] + y.data[i];
	}
	return h;
}
Vector  operator - (Vector &x, Vector &y) {
	Vector h(x.len);
	for (int i = 0; i < x.len; i++) {
		h.data[i] = x.data[i] - y.data[i];
	}
	return h;
}
Vector  operator * (Vector &x, Vector &y) {
	Vector h(x.len);
	for (int i = 0; i < x.len; i++) {
		h.data[i] = (x.data[i] * y.data[i]);
	}
	return h;
}
double &Vector::operator ^ (Vector &v) {
	long sizeofVector = 0;
	for (int i = 0; i < this->len; i++) {
		sizeofVector += (*(this->data + i) * *(this->data + i));
	}
	double lenvector = sqrtl(sizeofVector);
	return lenvector;
}
int Vector::getLen() {
	return this->len;

}
void Vector::setLen(int len) {
	this->len = len;
}
int* & Vector::getData() {
	return this->data;
}
void Vector::setData(int *d) {
	for (int i = 0; i < this->len; i++) {
		this->data[i] = d[i];
	}
}