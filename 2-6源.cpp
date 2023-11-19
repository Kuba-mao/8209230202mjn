#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "a与b的最小公倍数为： ";
	int m=a;
	int n=b;
	while (m!=n)
	{
		if (m > n)
		{
			n = n + b;
		}
		else {
			m = m + a;
		}
     }
	cout << m << endl;
	cout << "a与b的最大公约数为：";
	int h;
	int c, d;
	if (a > b)
	{
		c = a;
		d = b;
	}
	else
	{
		c = b, d = a;
	}
	while(d!=0) {
		h = c % d;
		c = d;
		d = h;
	}
	cout << c;


return 0;
}