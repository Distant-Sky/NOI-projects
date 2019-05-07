#include<iostream>
using namespace std;
main()
{
	int a[100]={0},n,i,s,c;
	cin>>n;
	s=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	c=s/n;
	cout<<"平均分是"<<c<<endl<<"其中高于平均分的有：";
	for(i=0;i<n;i++)
	{
		if(a[i]>c) cout<<a[i]<<" ";
	}
}
