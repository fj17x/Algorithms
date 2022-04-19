#include <iostream>

using std::cin;
using std::cout;

int bs(int *, int, int);

int search;

int main()
{
    int arr[10];
    int n;

    cout << "Enter number of elements in array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter what to search for: ";
    cin >> search;

    int found = bs(arr, 0, n - 1);
    if (found == -1)
    {
        cout << "Not found";
    }
    else if (found == search)
    {
        cout << "Found";
    }
}

int bs(int *arr, int lb, int up)
{
    if (lb == up)
    {
        if (arr[lb] == search)
        {
            return search;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid = (lb + up) / 2;
        if (search == arr[mid])
        {
            return search;
        }
        else if (search < arr[mid])
        {
            return bs(arr, 0, mid - 1);
        }
        else if (search > arr[mid])
        {
            return bs(arr, mid + 1, up);
        }
    }
}
