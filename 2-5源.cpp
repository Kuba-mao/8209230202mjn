#include <iostream>
using namespace std;
int main()
{
	char line[10000];
 std::cout << "������һ���ַ���";
	cin.getline(line,10000);
	std::cout << "������ַ�Ϊ��" << line << endl;
	int z = 0;
	int x = 0;
	int v = 0; 
	int e = 0;
	for (int h=0;h<10000;h++)
	{
	int c;
	c = line[h];

		if (c >=65 && c <= 90)
		{
			z++;
		}
		else if (c >=97 && c <= 122)
		{
			z++;
		}
		else if (c >= 48 && c <= 57)
		{
			x++;
		}
		else if (c == 32)
		{
			v++;
		}
		else if (c == 0)
		{
			break;
		}
		else
		{
			e++;
		}
	}
	std::cout << "��ĸ�У�" << z << "��" << endl;
	std::cout << "�����У�" << x << "��" << endl;
	std::cout << "�ո��У�" << v << "��" << endl;
	std::cout << "�����У�" << e << "��" << endl;
	
	
		return 0;


}