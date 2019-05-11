#include<iostream>
using namespace std;
main()
{
	int *p,a=3;
	p=&a;*p=5;
	cout<<*p<<a;
} 
