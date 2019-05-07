#include<iostream>
using namespace std;
main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=i*3+j+1;
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
