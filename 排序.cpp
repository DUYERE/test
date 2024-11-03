#include <iostream>
using namespace std;
int main()
{
	int q;
	int a, b, c, d, e, f, g, h, i, j;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	int aaa[10] = {a,b, c, d, e, f, g, h, i, j };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i-1; j++)
		{
			if (aaa[j] > aaa[j + 1])
			{
				q = aaa[j];
				aaa[j] = aaa[j + 1];
				aaa[j + 1] = q;
			}

		}





	}
	for (int k = 0; k < 10; k++) 
    {
	
		
		
		cout << aaa[k] <<" ";
	}
	








	return 0;
}