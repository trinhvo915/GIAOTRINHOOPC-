#include "Vector.h"
// contructor mac dinh
Vector::Vector(int n)
{
	this->n = n;
	this->data = new int[n];
}
// ham huy
Vector::~Vector()
{
	delete[] data;
}
// ham sao chep
Vector::Vector(const Vector &x) {
	this->setN(x.n);
	int n = this->getN();
	this->data = new int[n];
	for (int i = 0; i < n; i++) {
		this->data[i] = x.data[i];
	}
}
// getter N
int Vector::getN() {
	return this->n;
}
// setter N
void Vector::setN(int n) {
	this->n = n;
}
istream & operator >> (istream &in, Vector &vt) {
	for (int i = 0; i < vt.getN(); i++) {
		cout << "Nhap toa do thu " << i << " : " << endl;
		in >> vt.data[i];
	}
	return in;
}
ostream & operator << (ostream &out, const Vector &vt) {

}