#include<iostream>
using namespace std;
int u(int a, int b)
{
	int k = 1;
	for (int i = 0; i < b; i++)
	{
		k = k * a;
	}
	return k;
}
int main()
{
	double pi = 0.0;
	int a = 1;
	int i = 0;
	do {
		pi += ((4.0 / a) * (u(-1, i)));
		a = a + 2;
		i++;
	} while ((1.0 / a) > 1e-5);
	cout << pi << endl;
	int r;
	int h;
	cout << "Բ׶�İ뾶�͸߷ֱ�Ϊ�� " << endl;
	cin >> r >> h;
	double V;
	V = ((1.0/3) * r * r * pi * h);
	cout << "��Բ׶������ǣ�" << V << endl;
	return 0;
}