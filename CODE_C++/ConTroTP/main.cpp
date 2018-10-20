#include<iostream>
using namespace std;
void createArray(int **&p, int n) {
	p = new int *[n];
	for (int i = 0; i < n; i++) {
		//
		p[i] = new int[n];
	}
}
void InputArray(int **&p, int n, char c) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << c <<" [" << i << "," << j << "] = ";
			cin >> p[i][j];
			cout << endl;
		}
	}
}
int x = 5 / 0;
void OutArray(int **p, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << p[i][j] << "  ";
		}
		cout << endl;
	}
}
int ** AddMatricAandB(int **p, int **q, int n) {
	int ** k;
	createArray(k, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			k[i][j] = p[i][j] + q[i][j];
		}
	}
	return k;
}
int ** NhanMaTran(int **p, int **q, int n) {
	int ** k;
	createArray(k, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			k[i][j] += p[i][j] * q[j][i];
		}
	}
	return k;
}
void deleteArraypointer(int **p, int n) {
	for (int i = 0; i < n; i++) {
		delete[] p[i];
	}
	delete[] p;
}
int main() {
	int **p;
	int n;
	char A = 'A', B = 'B';
	cout << "Moi Ban Nhap ma tran vuong cap n = " << endl;
	cin >> n;
	createArray(p, n);
	InputArray(p, n, A);
	cout << "Ma tran A = [] " << endl;
	OutArray(p, n);
	int **q;
	cout << "-----------------------------" << endl;
	createArray(q, n);
	InputArray(q, n, B);
	cout << "Ma tran B = [] " << endl;
	OutArray(q, n);
	int ** matranadd;
	matranadd = AddMatricAandB(p, q, n);
	cout << "Ma tran M = [] sau khi cong " << endl;
	OutArray(matranadd, n);
	cout << "-----------------------------" << endl;
	int ** matrannhan;
	matrannhan = NhanMaTran(p, q, n);
	cout << "Ma tran N = [] sau khi nhan " << endl;
	OutArray(matrannhan, n);
	// giai phong vung nho 
	deleteArraypointer(p, n);
	deleteArraypointer(q, n);
	deleteArraypointer(matranadd, n);
	system("pause");
	return 0;
}