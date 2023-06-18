#include <iostream>

using namespace std;

void InsertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0; j--) {
			if (x < a[j])
				a[j + 1] = a[j];
			else
				break;
		}
		a[j + 1] = x;
	}
}

void BinaryInsertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int x = a[i];
		int l = 0;
		int r = i - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (x < a[mid]) {
				r = mid - 1;
			}
			else if (x > a[mid]) {
				l = mid + 1;
			}
		}
		for (int j = i - 1; j >= l; j--) {
			a[j + 1] = a[j];
		}
		a[l] = x;
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	/*InsertionSort(a, n);*/
	BinaryInsertionSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}