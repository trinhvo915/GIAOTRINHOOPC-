#include "Polynomial.h"

// ham contructor
Polynomial::Polynomial(int cap)
{
	this->cap = cap;
	this->data = new double[this->cap];
}
// ham huy
Polynomial::~Polynomial()
{
	//delete[] this->data;
}
Polynomial & Polynomial::operator = (const Polynomial &x) {
	if (this != &x) {
		this->cap = x.cap;
		delete[] this->data;
		this->data = new double[this->cap];
		for (int i = 0; i < this->cap; i++) {
			this->data[i] = x.data[i];
		}
	}
	return *this;
}
istream & operator >> (istream & in, Polynomial &p) {
	int n = p.cap;
	for (int i = 0; i < n; i++) {
		cout << "Moi ban nhap cap thu " << i << " : ";
		in >> p.data[i];
	}
	return in;
}
//f(x) = data[i] x^ i + a
ostream & operator << (ostream & out, Polynomial &p) {
	int n = p.cap;
	out << "f(x) = ";
	int k = n - 1;
	// in gia tri dau
	if (p.data[0] < 0) {
		out << p.data[0] << "X^" << (k--);
	}
	else if (p.data[0] == 0) {
		k--;
		out << "";
	}
	else {
		out << p.data[0] << "X^" << (k--);
	}
	// in gia tri giua gia tri dau va cuoi
	for (int i = 1; i < n - 1; i++) {
		if (p.data[i] < 0) {
			// neu gap gia tri ke cuoi thi in ra = aX// ko can mu 1
			if (i == n - 2) {
				out << " " << p.data[i] << "X";
			}
			else {
				out << " " << p.data[i] << "X^" << (k--);
			}
		}
		else if (p.data[i] == 0) {
			k--;
			out << "";
		}
		else if (p.data[i] > 0) {
			if (p.data[i - 1] == 0) {
				if (i == n - 2) {
					// neu gap gia tri ke cuoi thi in ra = aX// ko can mu 1
					out << " + " << p.data[i] << "X";
				}
				else {
					out << " + " << p.data[i] << "X^" << (k--);
				}
			}
			else {
				if (i == n - 2) {
					// neu gap gia tri ke cuoi thi in ra = aX// ko can mu 1
					out << " + " << p.data[i] << "X";
				}
				else {
					out << " + " << p.data[i] << "X^" << (k--);
				}

			}
		}
	}
	// in gia tri cuoi cung
	if (p.data[n - 1] < 0) {
		out << " " << p.data[n - 1];
	}
	else if (p.data[n - 1] == 0) {

		out << "";
	}
	else {
		out << " + " << p.data[n - 1];
	}
	return out;
}
// f(x) = 4 x^ 4 + 3x^3 + 5x^2 + 6x^1 + 5  => len =  5
// f(x) =				  4x^2 + 3x^1 + 5	=> len = 3
Polynomial  operator + (Polynomial  &x, Polynomial &y) {
	int n = x.cap, m = y.cap;
	if (n > m) {
		int index = n - m;
		for (int i = 0; i < m; i++) {
			x.data[index] = x.data[index] + y.data[i];
			index++;
		}
		return x;
	}
	else if (n < m) {
		int index = m - n;
		for (int i = 0; i < n; i++) {
			y.data[index] = y.data[index] + x.data[i];
			index++;
		}
		return y;
	}
	else {
		for (int i = 0; i < m; i++) {
			x.data[i] = x.data[i] + y.data[i];
		}
		return x;
	}
}
Polynomial  operator - (Polynomial & x, Polynomial &y) {
	int n = x.cap, m = y.cap;
	if (n > m) {
		int index = n - m;
		for (int i = 0; i < m; i++) {
			x.data[index] = x.data[index] - y.data[i];
			index++;
		}
		return x;
	}
	else if (n < m) {
		int index = m - n;
		for (int i = 0; i < n; i++) {
			y.data[index] = x.data[i] - y.data[index];
			index++;
		}
		return y;
	}
	else {
		for (int i = 0; i < m; i++) {
			x.data[i] = x.data[i] - y.data[i];
		}
		return x;
	}
}
//polynomial & operator * ( polynomial & x,  polynomial &y) {
//
//}
double  &Polynomial::operator [] (int k) {
	int n = this->cap; double result;
	for (int i = 0; i < n; i++) {
		if (k == i) {
			result = this->data[i];
			break;
		}
	}
	return result;
}
// f(X) = 4x ^3 + 3x^2+ 5x+ 8 // n = 4
double & Polynomial::operator ()(double x) {
	int n = this->cap; double result = 0;
	int m = this->cap-1;
	for (int i = 0; i < n; i++) {
		result += this->data[i] * pow(x, m);
		m--;
	}
	return result;
}
int Polynomial::getCap() {
	return cap;
}
void Polynomial::setCap(int cap) {
	this->cap = cap;
}
double *Polynomial::getData() {
	return data;
}
void Polynomial::setData(double *dataCopy) {
	for (int i = 0; i < this->cap; i++) {
		this->data[i] = dataCopy[i];
	}
}
