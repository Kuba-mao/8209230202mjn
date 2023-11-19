#include<iostream>
using namespace std;
int main() 
{
	double m, n;
	double a;
	cin >> a;
	if (a > 0)
	{
		m = n = a;
		double tem;
		do {
			tem = m;
			m = n;
			n = tem;
			n = (1.0 / 2) * (m + (a / m));
		} while (m - n >= 1e-5 || m - n >= 1e-5);
		cout << n << endl;
	}
	else if (a < 0)
	{
		cout << "´íÎó" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}