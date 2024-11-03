#include <iostream>
using namespace std;
int main()
{
	int arr[3][3] = {
		{0,0,0},
		{ 0,0,0 },
		{ 0,0,0 }

	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];

		}

	}
	cout << endl;
	int a, b, c;
	a = arr[0][1];
	arr[0][1] = arr[1][0];
	arr[1][0] = a;
	b = arr[1][2];
	arr[1][2] = arr[2][1];
	arr[2][1] = a;
	c = arr[0][2];
	arr[0][2] = arr[2][0];
	arr[2][0] = c;



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<arr[i][j]<<" ";

		}
		cout << endl;

	}








	return 0;
}