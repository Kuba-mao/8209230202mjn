#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x > 0.0 && x < 1.0)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (x >= 1.0 && x < 5.0)
	{
		y = (2 / (4 * x)) + 1;
		cout << y;
	}
	else if (x >= 5.0 && x < 10.0)
	{
		y = x * x;
		cout << y;
	}
	else
	{
		cout << "该数不在X的定义域内" << endl;
	}
	return 0;
}