#include <iostream>
using namespace std;
int main()
{
	int m, n;
	int min,max;

	cin >> m >> n;
	if (m > n)
	{
		min = n;
	}
	else
	{
		min = m;
	}

	for (int i = min; i > 0; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << i <<" ";
			break;
		}
	}
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;

	}
	for (int j = max; j > 0; j++)
	{
		if (j % m == 0 && j % n == 0)
		{
			cout << j << endl;
			break;
		}
	}










	return 0;
}