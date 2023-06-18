#include <iostream>
using namespace std;

void ShakerSort(int a[], int n) {
	int l = 0;
	int r = n - 1;
	int k = 0;
	while (l < r) {
		for (int i = l; i < r; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				k = i;
			}
		}
		r = k;
		for (int i = r; i > l; i--) {
			if (a[i] < a[i - 1]) {
				swap(a[i], a[i - 1]);
				k = i;
			}
		}
		l = k;
	}
}

int main() {
	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ShakerSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}