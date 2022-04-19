#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a[10][20], b[10][20], c[10][20];
    int n, m, p;

    cout << "Enter the row of first matrix:";
    cin >> m;
    cout << "Enter the column of the first matrix and the row of the second: ";
    cin >> n;
    cout << "Enter the column of second matrix:";
    cin >> p;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter second matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "The product of the matrices are: \n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << c[i][j];
        }
        cout << "\n";
    }
}
