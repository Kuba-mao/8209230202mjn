#include<iostream>
using namespace std;
int main()
{
	cout << "������������ֵ�� " << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (a - b) < c ||( b - a) < c)
	{
		double L;
		L = a + b + c;
		cout << "�ܳ�Ϊ��" << L << endl;
		if (a == b || a == c || b == c)
		{
			cout << "Ϊ����������";
		}
		else
		{
			cout << "���ǵ���������";
		}
	}

	else 
	{
		cout << "������������";
	}
	return 0;
}