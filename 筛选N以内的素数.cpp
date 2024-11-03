#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for (int i = 2; i <N ; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j != 0&&i%2!=0)
			{
				cout << i << endl;
				break;
			}




		}


		








	}
















	return 0;
}