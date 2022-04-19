#include <iostream>
using namespace std;

int quicksort(int *, int, int);
int partition(int *, int, int);

int main()
{
    int arr[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "The new array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int quicksort(int *A, int l, int h)
{
    if (l < h)
    {
        int index = partition(A, l, h);
        quicksort(A, l, index - 1);
        quicksort(A, index + 1, h);
    }
}

int partition(int *A, int l, int h)
{
    int pivot = A[h];
    int temp;
    int index = l;

    for (int i = l; i < h; i++)
    {
        if (A[i] <= pivot)
        {
            temp = A[i];
            A[i] = A[index];
            A[index] = temp;
            index++;
        }
    }

    temp = A[index];
    A[index] = A[h];
    A[h] = temp;

    return index;
}