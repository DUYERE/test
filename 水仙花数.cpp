#include <iostream>
using namespace std;
int main()
{
	
	for (int i = 100; i < 1000; i++)
	{
		int b, s, g;
		b = i / 100;
		s = i / 10 % 10;
		g = i % 10;
		if (i == b*b*b+ s*s*s + g*g*g)
		{
			cout << i << endl;
		}










	}



















	return 0;
}