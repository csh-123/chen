#include<iostream>
#include<math.h>   //调用函数<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a, b, c;
	double s, area;
	cout << "请输入三角形三边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)                          //判断三角形是否成立
	{
		s = 1.0 / 2 * (a + b + c);                        /*此处很关键，刚开始打1/2，结果输什么数进去都是0。
												 细细斟酌后才发现int的1/2=0的，要打1.0/2才对。*/
		area = sqrt(s*(s - a)*(s - b)*(s - c));         //sqrt表示平
		cout << "三角形面积" << area << endl;
	}
	else

		cout << "该三边不构成三角形" << endl;
	system("pause");
	return 0;
}