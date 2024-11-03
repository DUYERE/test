#include <iostream>
#include <string>
using namespace std;
string concatStrings(int num1,string str1)
{
	cout << num1 << str1 << endl;
	return to_string(num1)+str1;
}




int main()
{
	int a;
	cin >> a;
	string str1;
	cin >> str1;
	concatStrings(a, str1);
	














	return 0;
}