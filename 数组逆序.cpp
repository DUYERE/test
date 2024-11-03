#include <iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
	int* start = arr;
	int* end = arr + size - 1;
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	int arr[10];
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	reverseArray(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}







	return 0;
}