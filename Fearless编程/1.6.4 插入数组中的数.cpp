#include<iostream>
using namespace std;
main()
{
	int a[10]={111,222,333,444,555,666,777,888,999,0},i,x,y;
	for(i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cin>>x>>y;
	for(i=10;i>x-1;i--)
	{
		a[i-1]=a[i-2];
	}
	a[x-1]=y;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
