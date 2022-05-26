#include <iostream>
using namespace std;

int MCM(int a[], int i, int j)
{
	if (i == j)
		return 0;
	int k, min = 999, count;
	for (k = i; k < j; k++)
	{
		count = MCM(a, i, k) + MCM(a, k + 1, j) + a[i - 1] * a[k] * a[j];
		if (count < min)
			min = count;
	}
	return min;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);
	cout << "Minimum multiplications needed is:" << MCM(arr, 1, n - 1);
}
