#include <iostream>
#include <algorithm>
using namespace std;

int KS(int c, int weight[], int profit[], int n)
{
	if (n == 0 || c == 0)
		return 0;
	if (weight[n - 1] > c)
		return KS(c, weight, profit, n - 1);
	else
		return max(KS(c, weight, profit, n - 1), profit[n - 1] + KS(c - weight[n - 1], weight, profit, n - 1));
}

int main()
{
	int profit[] = {80, 100, 140};
	int weight[] = {5, 15, 25};
	int c = 50;
	cout << "Max profit:" << KS(c, weight, profit, sizeof(profit) / sizeof(int));
}
