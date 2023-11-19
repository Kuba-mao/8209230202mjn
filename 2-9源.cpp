#include<iostream>
using namespace std;
int main()
{
	float a = 0.8;
	int i=1;
	float sum=0.0;
	for (int m = 2; m <= 100; m = 2 * m)
	{
		sum = sum + a * m;
		i++;
	}
	float n;
	n = sum / i;
	cout << n << endl;
	return 0;
}