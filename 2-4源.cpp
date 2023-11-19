#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char ch1, ch2;
	cin >> a >> ch1 >> b >> ch2;
	int m;
	m = ch1;
	double n;
	switch(m)
	{
	case(43):
	{
		n = a + b;
		cout << n << endl;
		break;
	}
	case(47):
	{if (b != 0) 
	{
		n = (double)a / b;
		cout << n << endl;
		break;
	}
	else {
		cout << "除法时分母不能为0" << endl;
		break;
	      }
	}
	case(37):
	{
		n = (int)a % (int)b;
		cout << n << endl;
		break;
	}
	case(42):
	{
		n = a * b;
		cout << n << endl;
		break;
	}
	case(45):
	{
		n = a - b;
		cout << n << endl;
		break;
	}
	default:
	{
		cout << "错误" << endl;
	}
	}
	
	return 0;
}
