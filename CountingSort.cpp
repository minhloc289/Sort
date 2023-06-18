#include <iostream>
using namespace std;

void input(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void countSort(int a[], int n)
{
    int *b = new int[n]; 
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i]; 
        else if (a[i] < min)
            min = a[i]; 
    }
    int k = max - min + 1; 
    int *count_array = new int[k]; 
    fill_n(count_array, k, 0); 
    for (int i = 0; i < n; i++)
        count_array[a[i] - min]++; 
    for (int i = 1; i < k; i++)
        count_array[i] += count_array[i - 1];
    for (int i = 0; i < n; i++)
    {
        b[count_array[a[i] - min] - 1] = a[i];
        count_array[a[i] - min]--;
    }
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}

void output(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	input(a, n);
	countSort(a, n);
	output(a, n);
}
