#include <iostream>
using namespace std;

int mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int merge(int arr[], int l, int mid, int h)
{
    int i = l, lo, mi, temp[50];

    lo = l;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= h))
    {
        if (arr[lo] < arr[mi])
        {
            temp[i] = arr[lo];
            lo++;
        }
        else
        {
            temp[i] = arr[mi];
            mi++;
        }
        i++;
    }

    if (lo <= mid)
    {

        for (int k = lo; k <= mid; k++)
        {
            temp[i] = arr[lo];
            lo++;
            i++;
        }
    }
    else
    {
        for (int k = mi; k <= h; k++)
        {
            temp[i] = arr[mi];
            mi++;
            i++;
        }
    }

    for (int k = l; k <= h; k++)
    {
        arr[k] = temp[k];
    }
}

int main()
{
    int arr[6] = {4, 2, 5, 9};

    int highest = 4;
    mergeSort(arr, 0, highest - 1);

    for (int i = 0; i < highest; i++)
    {
        cout << arr[i] << " ";
    }
}