#include<iostream>
using namespace std;
int jc(int n)
{
	int a=1;
	for(int i=1;i<=n;i++)
	a*=i;
	return a;
}
main()
{
	int s=0,i;
	for(i=1;i<=10;i++)
	s+=jc(i);
	cout<<"1至10的阶乘和是"<<s;
}

