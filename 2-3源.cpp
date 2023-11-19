#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三个数值： " << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (a - b) < c ||( b - a) < c)
	{
		double L;
		L = a + b + c;
		cout << "周长为：" << L << endl;
		if (a == b || a == c || b == c)
		{
			cout << "为等腰三角形";
		}
		else
		{
			cout << "不是等腰三角形";
		}
	}

	else 
	{
		cout << "不构成三角形";
	}
	return 0;
}