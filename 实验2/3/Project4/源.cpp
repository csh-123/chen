#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int y, m, d, dd = 0, i, z = 0, a;
	cout << "Please input:";
	cin >> y >> m >> d;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)n[2] = 29;
	for (i = 1; i < m; i++)dd += n[i];
	dd += d;
	a = dd / 7;
	if ((dd % 7 == 0))
	{
		cout << "it is the  " << a << "th day\n";
	}
	else
	{
		z = a + 1;
		cout << "it  is  the  " << z << "th zhou\n";
	}
	cout << "It is the " << dd << "th day.\n";
	system("pause");
	return 0;
}