#include<bits/stdc++.h>
using namespace std;
int t(int a)
{
	return a;
}
main()
{
	cout<<t<<endl;		//显示函数地址 
	int (*p)(int a);	//定义函数指针变量p 
	p=t;				//将函数t的地址赋值给指针p 
	cout<<p(5);			//可将p代为（*p） 
}
