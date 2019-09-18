#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
double x, x1, x2, t; //定义全局变量
void f1();          //函数声明
double f2(double a, double b);
void f3(double a, double b, double c);
int main()
{
	double a, b, c;
	cout << "请输入a，b，c的值：" << endl;
	cin >> a >> b >> c;
	t = b * b - 4 * a*c;
	if (t == 0) //由根的判别式来决定执行哪条分支
	{
		f2(a, b);
		cout << "x1=x2=" << x;
	}
	else if (t < 0)
	{
		f1();
	}
	else
	{
		f3(a, b, c);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2;
	}
	cout << endl;
	system("pause");
	return 0;
}
void f1()
{
	cout << "此方程无根！" << endl;
}
double f2(double a, double b)
{
	x = -b / (2 * a);
	return x;
}
void f3(double a, double b, double c)
{
	x1 = ((-b + (sqrt(t))) / (2 * a));
	x2 = ((-b - (sqrt(t))) / (2 * a));
}
