#include <iostream>

using namespace std;

void BubbleSort(int a[], int n) {
	bool swapped;
	for (int i = 0; i < n; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	BubbleSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}