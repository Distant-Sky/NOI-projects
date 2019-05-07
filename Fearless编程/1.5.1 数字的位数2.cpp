#include <iostream>
#include<cstdio>
using namespace std;
main()
{
int a,s=1;
cout<<"请输入一个数字"<<endl;
cin>>a;
while(a>=10)
{
	a=a/10;
	s++;
}
cout<<s<<"位数"<<endl;
} 
