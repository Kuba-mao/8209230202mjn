#include <iostream>
using namespace std;
int main()
{
	char line[10000];
 std::cout << "请输入一行字符：";
	cin.getline(line,10000);
	std::cout << "输入的字符为：" << line << endl;
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
	std::cout << "字母有：" << z << "个" << endl;
	std::cout << "数字有：" << x << "个" << endl;
	std::cout << "空格有：" << v << "个" << endl;
	std::cout << "其它有：" << e << "个" << endl;
	
	
		return 0;


}