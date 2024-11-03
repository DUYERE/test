#include <iostream>
using namespace std;
int main()
{
	int arr1[] = { 1,7,8,17,23,24,59,62,101 };
	int add;
	for (int i = 0; i < 9; i++)
	{
		cout << arr1[i] << " ";

	}
	cout << endl;
	cin >> add;
	int arr2[10] = {};
	for (int j = 0; j < 9; j++)
	{
		arr2[j] = arr1[j];
		arr2[9] = add;
	}


	for (int x = 0; x < 10; x++)
	{
		for (int z = 0; z < 10 - x - 1; z++)
		{
			if (arr2[z] > arr2[z + 1])
			{
				int c = 0;
				c = arr2[z];
				arr2[z] = arr2[z + 1];
				arr2[z + 1] = c;


			}



		}

	}
	for (int v = 0; v < 10; v++)
	{
		cout << arr2[v] << endl;

	}





	return 0;
}