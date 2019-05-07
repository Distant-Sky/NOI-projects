#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n,f,i,k,m;
	k=0;
	m=0;
	for(n=2;n<=1000;n++)
	{
		f=1;
		for(i=2;i<=sqrt(n)&&f==1;i++)
		{
			if(n%i!=0) f=1;
			else f=0;
		}
		if(f==1&&m<8)
		{cout<<n<<" "; k+=1;m+=1;}
		else if(f==1) {m=0;cout<<endl<<n<<" ";k+=1;}
	}
	cout<<endl<<"总共有"<<k<<"个质数";
}
