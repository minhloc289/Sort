#include <iostream>

using namespace std;

void quicksort(int a[], int l, int r) {
	int i = l, j = r;
	int x = a[(l + r) / 2];
	while (i <= j) {
		while (a[i] < x) {
			i++;
		}
		while (a[j] > x) {
			j--;
		}
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (l < j)
		quicksort(a, l, j);
	if (i < r)
		quicksort(a, i, r);
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}