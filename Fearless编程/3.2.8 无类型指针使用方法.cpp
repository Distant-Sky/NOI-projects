#include<iostream>
using namespace std;
main()
{
	int a=10;
	double b=3.5;
	void *p=&a;
	cout<<*(int*)p<<endl;			//必须明确p指向的空间的类型 
	p=&b;
	cout<<*(double*)p<<endl;
}
