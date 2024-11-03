#include <iostream>
using namespace std;
int main()
{
	int n, Sn=0, x=1;
	cin >> n;
	if (n > 20)
	{
		cout << "n取小于20的数" << endl;

	}
	else
	{
		for (int i = 1; i <= n; i++)
		{


			x = i * x;


			Sn = Sn + x;





		}

		cout << Sn << endl;
	}













	return 0;

}
