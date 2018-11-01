#include "Matrix.h"
// constructor
Matrix::Matrix(int h, int c)
{
	this->h = h;
	this->c = c;
	this->p = new  double *[h];
	for (int i = 0; i < this->h; i++) {
		this->p[i] = new double[this->c];
	}
}
// ham sao chep
Matrix::Matrix(const Matrix &m) {
	this->h = m.h;
	this->c = m.c;
	this->p = new  double *[h];
	for (int i = 0; i < this->h; i++) {
		this->p[i] = new double[this->c];
	}
	for (int i = 0; i < this->h; i++) {
		for (int j = 0; j < this->c; j++) {
			this->p[i][j] = m.p[i][j];
		}
	}
}
// ham huy
Matrix::~Matrix()
{
	for (int i = 0; i < this->h; i++)
		delete[]this->p[i];
	delete[] this->p;
}
// phep gan
Matrix & Matrix:: operator = (const Matrix &m) {
	for (int i = 0; i < this->h; i++)
		delete[]this->p[i];
	delete[] this->p;

	if (this->h == m.h && this->c == m.c) {
		this->p = new  double *[this->h];
		for (int i = 0; i < this->h; i++) {
			this->p[i] = new double[this->c];
		}

		for (int i = 0; i < this->h; i++) {
			for (int j = 0; j < this->c; j++) {
				this->p[i][j] = m.p[i][j];
			}
		}
	}
	return *this;
}
// ham nhap
istream & operator >> (istream &in, Matrix &m) {
	for (int i = 0; i < m.h; i++) {
		for (int j = 0; j < m.c; j++) {
			cout << " [" << i << "," << j << "] = ";
			in >> m.p[i][j];
		}
	}
	return in;
}
// ham xuat
ostream & operator << (ostream &out, const Matrix &m) {
	for (int i = 0; i < m.h; i++) {
		for (int j = 0; j < m.c; j++) {
			cout << m.p[i][j] << " ";
		}
		cout << endl;
	}
	return out;
}
Matrix operator + (const Matrix & m, const Matrix & n) {
	int hm = m.h; int cm = m.c;
	int hthis = n.h; int cthis = n.c;
	Matrix result(hthis, cthis);
	if (hthis == hm && cthis == cm) {
		for (int i = 0; i < hthis; i++) {
			for (int j = 0; j < cthis; j++) {
				result.p[i][j] = n.p[i][j] + m.p[i][j];
			}
		}
	}
	return result;
}
Matrix operator - (const Matrix & m, const Matrix & n) {
	int hm = m.h; int cm = m.c;
	int hthis = n.h; int cthis = n.c;
	Matrix result(hthis, cthis);
	if (hthis == hm && cthis == cm) {
		for (int i = 0; i < hthis; i++) {
			for (int j = 0; j < cthis; j++) {
				result.p[i][j] = m.p[i][j] - n.p[i][j];
			}
		}
	}
	return result;
}
Matrix operator * (const Matrix & m, const Matrix & n) {
	int hm = m.h; int cm = m.c;
	int hthis = n.h; int cthis = n.c;
	Matrix result(hm, cthis);
	for (int i = 0; i < hm; i++) {
		for (int j = 0; j < cthis; j++) {
			result.p[i][j] = 0;
		}
	}
	if (cm == hthis) {
		for (int i = 0; i < hm; i++) {
			for (int j = 0; j < cthis; j++) {
				for (int c = 0; c < cm; c++) {
					result.p[i][j] += m.p[i][c] * n.p[c][j];
				}
			}
		}
	}
	return result;
}
double Matrix::operator ()(int x, int y) {
	int n = this->h; int m = this->c;
	double result;
	if (x <= n && x >= 0 && y <= m && y >= 0) {
		for (int i = 0; i < n; i++) {
			if (x == i) {
				for (int j = 0; j < m; j++) {
					if (j == y) {
						result = this->p[i][j];
						break;
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				continue;
			}
		}
	}
	return result;
}
