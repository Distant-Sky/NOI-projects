#include<iostream>				//����1.12.3��1.12.4��ֵ����ַ���� 
using namespace std;
int  swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;			//�˴�����ֵ���в�������ַû�� 
}
main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b;
}
