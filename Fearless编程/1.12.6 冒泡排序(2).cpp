#include<iostream>
using namespace std;
void bub(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
}
main()
{
	int a[10]={11,4,55,6,77,8,9,0,7,1},i;
	cout<<"ÅÅÐòÇ° ";
	for(i=0;i<9;i++)
	cout<<a[i]<<",";
	cout<<a[9]<<endl;
	bub(a,10);
	cout<<"ÅÅÐòºó ";
	for(i=0;i<9;i++)
	cout<<a[i]<<",";
	cout<<a[9]<<endl;
}
