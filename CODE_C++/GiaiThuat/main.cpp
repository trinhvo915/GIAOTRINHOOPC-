#include<iostream>
using namespace std;
bool Search(int *p,int n, int x) {
	bool check = false;
	for (int i = 0; i < n; i++) {
		if (p[i] == x)
			check = true;
	}
	return check;
}
void swap(int &x, int &y) {
	int tam;
	tam = x;
	x = y;
	y = tam;
}
// 
void OutputArray(int *p, int n) {
	for (int i = 0; i < n; i++) {
		cout << p[i] << " "; 
	}
}
// sort chon Selection Sort
void SelectionSort(int *p, int n, bool a) {
	if (a == true) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (p[i] > p[j]) {
					swap(p[i], p[j]);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (p[i] < p[j]) {
					swap(p[i], p[j]);
				}
			}
		}
	}
}
bool TD(int left, int right) {
	return left > right;
}
bool GD(int left, int right) {
	return left < right;
}
void SelectionSortConTro(int *p, int n, bool a, bool (*q) (int, int)) {
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (q (p[i] , p[j])) {
				// q (p[i] , p[j]) = q (*(p+i) , *(p+j))
				swap(p[i], p[j]);
			}
		}
	}
}

// sort noi bot
void SortBubble(int *p, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= i; j--) {
			if (p[j] > p[j - 1])
				swap(p[j], p[j - 1]);
		}
	}
}
// Insertion Sort
void InsertSort(int *p, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < 0; j--) {
			if (p[j] > p[j - 1])
				swap(p[j], p[j - 1]);
		}
	}
}
// Mert Sort
void MertSort(int *p, int n) {

}
// Shell Sort
void ShellSort(int *p, int n) {
	// h = h *3 +1; : la so phan tu nay den so phan tu khac
}
// Quick Sort
void QuickSort(int *p, int n) {

}
// Heap Sort
void HeapSort(int *p, int n) {

}
int SearchBinary(int *p, int n, int x) {
	int mid; 
	int left = 0;
	int right = n - 1;
	do {
		// mid = left + (right - left ) /2;
		// Find noi suy
		// mid  = left + (X - T[left]) * (right - left) / (T[right] - T[left] ) 
		mid = (left + right) / 2;
		if (p[mid] == x)
			return mid;
		if (x < p[mid])
			right = mid -1;
		else
			left = mid + 1;
	} while (left <= right);
	return -1;
}
int main() {
	int *p;
	int A[100] =  {1,7,4,9,2 }; 
	// get lenght number Array A;
	int lenght = sizeof(A) + sizeof(int);
	p = A;
	/*bool a = Search(p, 5, 4);
	if (a == true)
		cout << " Tim thay" <<endl;
	else
		cout << "Khong tim thay" << endl;*/
	/*SelectionSort(p, 5, true);
	OutputArray(p, 5);*/
	//SelectionSortConTro(p, 5, TD);
	OutputArray(p, 5);
	int check = SearchBinary(p, 5,10);
	if (check != -1) {
		cout << " Tim thay" << endl;
	}
	else {
		cout << " Khong Tim thay" << endl;
	}
	system("pause");
	return 0;
}