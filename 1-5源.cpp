#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float f;
	cout << "�����뻪�϶ȣ� " << endl;
	cin >> f;
	double T;
	T = (f - 32.00) / 1.80;
	cout << fixed<<setprecision(2)<<"���϶ȣ� " <<T<< endl;
	return 0;
}
