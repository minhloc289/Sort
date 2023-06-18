#include <iostream>

using namespace std;

void SelectionSearch(int a[], int n) {
	int i, j, min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	SelectionSearch(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}