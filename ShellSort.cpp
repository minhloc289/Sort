#include <iostream>

using namespace std;

int ShellSort(int a[], int n) {
	for (int k = n / 2; k > 0; k /= 2) {
		for (int i = k; i < n; i++) {
			int temp = a[i];
			int j;
			for (j = i; j >= k && a[j - k] > temp; j -= k) {
				a[j] = a[j - k];
			}
			a[j] = temp;
		}
	}
	return 0;
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ShellSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}