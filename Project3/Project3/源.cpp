#include<iostream>
#include<math.h>   //���ú���<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a, b, c;
	double s, area;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)                          //�ж��������Ƿ����
	{
		s = 1.0 / 2 * (a + b + c);                        /*�˴��ܹؼ����տ�ʼ��1/2�������ʲô����ȥ����0��
												 ϸϸ���ú�ŷ���int��1/2=0�ģ�Ҫ��1.0/2�Ŷԡ�*/
		area = sqrt(s*(s - a)*(s - b)*(s - c));         //sqrt��ʾƽ
		cout << "���������" << area << endl;
	}
	else

		cout << "�����߲�����������" << endl;
	system("pause");
	return 0;
}