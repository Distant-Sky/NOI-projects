#include<bits/stdc++.h>
using namespace std;
bool d[16]={0},b[9]={0},c[16]={0};
int s=0,a[9],n,g[93]={0},f;
int print()
{
	int i;
	s++;
	for(int f=0;f<n;f++)
	{
		if(s==g[f])
		{
			for(i=1;i<=8;i++)
			cout<<a[i];
			cout<<endl;
		}
	}
}
int search(int i)
{
	int j;
	for(j=1;j<=8;j++)
	if((!b[j])&&(!c[i+j])&&(!d[i-j+7]))
	{
		a[i]=j;b[j]=1;c[i+j]=1;d[i-j+7]=1;
		if(i==8) print();
		else search(i+1);
		b[j]=0;c[i+j]=0;d[i-j+7]=0;
	}
}
main()
{
	cin>>n;
	for(f=0;f<n;f++)
	cin>>g[f];
	search(1);
}
