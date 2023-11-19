#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float f;
	cout << "请输入华氏度： " << endl;
	cin >> f;
	double T;
	T = (f - 32.00) / 1.80;
	cout << fixed<<setprecision(2)<<"摄氏度： " <<T<< endl;
	return 0;
}
