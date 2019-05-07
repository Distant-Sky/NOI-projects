#include <iostream>
#include<cstdio>
using namespace std;
main()
{
int a;
cout<<"请输入一个正整数,按Enter确认"<<endl;
cin>>a;
if(a<0||a>999999999) cout<<"error!"<<endl;
else if(a<10) cout<<"一位数"<<endl;
else if(a<100) cout<<"两位数"<<endl;
else if(a<1000) cout<<"三位数"<<endl;
else if(a<10000) cout<<"四位数"<<endl;
else if(a<100000) cout<<"五位数"<<endl;
else if(a<1000000) cout<<"六位数"<<endl;
else if(a<10000000) cout<<"七位数"<<endl;
else if(a<100000000) cout<<"八位数"<<endl;
else if(a<1000000000) cout<<"九位数"<<endl;
} 
