#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "a��b����С������Ϊ�� ";
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
	cout << "a��b�����Լ��Ϊ��";
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