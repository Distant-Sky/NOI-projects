#include<iostream>
using namespace std;
main()
{
	int a=10;
	double b=3.5;
	void *p=&a;
	cout<<*(int*)p<<endl;			//������ȷpָ��Ŀռ������ 
	p=&b;
	cout<<*(double*)p<<endl;
}
