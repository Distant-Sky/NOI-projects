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
	cout<<"ƽ������"<<c<<endl<<"���и���ƽ���ֵ��У�";
	for(i=0;i<n;i++)
	{
		if(a[i]>c) cout<<a[i]<<" ";
	}
}
