#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
int a,s=0;
cout<<"请输入一个数字"<<endl;
cin>>a;
while(a>0)
{
	s=s+a%10;
	a=a/10;
}
cout<<s<<endl;
} 
