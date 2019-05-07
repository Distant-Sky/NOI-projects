#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int n,j,k;
	cin>>n;
	if(n<10&&n>0)
	{
		for(int i=1;i<n*2;i++)
		{
			for(j=1;j<=abs(n-i);j++)
			{cout<<" ";}
			for(k=1;k<=2*n-2*abs(n-i)-1;k++)
			{
				int t;
				t=n-abs(n-abs(n-i)-k)-abs(n-i);
				cout<<t;
			}
		cout<<endl;
		}
	}
else cout<<"你输入的数字不对！";
}

