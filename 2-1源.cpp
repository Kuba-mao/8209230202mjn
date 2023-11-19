#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch;
	int a;
	a = ch;
	if (a >= 97 && a <= 122)
	{
		int b;
		b = a -32;
		
		cout << (char)b<< endl;
	}
	else if(a >= 65 && a <= 90)
	{
		int c;
		c = a + 1;
		cout << c << endl;
	}
	return 0;
}