#include <iostream>

using namespace std;

void input(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void Merge(int a[], int l, int m, int r) {
	int i, j, k = l;
	int m1 = m - l + 1;
	int m2 = r - m;
	
	//tao mang moi luu tru
	int* L = new int[m1];
	int* R = new int[m2];

	for (int i = 0; i < m1; i++) {
		L[i] = a[l + i];
	}
	for (int j = 0; j < m2; j++) {
		R[j] = a[m + j + 1];
	}

	//tron mang
	i = 0; j = 0;
	while (i < m1 && j < m2) { 
		if (L[i] < R[i]) {
			a[k++] = L[i++];
		}
		else a[k++] = R[j++];
	}
	while (i < m1) {
		a[k++] = L[i++];
	}
	while (j < m2) {
		a[k++] = R[j++];
	}

}

void MergeSort(int a[], int l, int r) {
	if (l < r) {
		int m = (l + (r - l)) / 2;
		MergeSort(a, l, m);
		MergeSort(a, m + 1, r);
		Merge(a, l, m, r);
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	MergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}