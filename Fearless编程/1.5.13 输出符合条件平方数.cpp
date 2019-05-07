#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int a,b;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			if(double(sqrt(a*1100+b*11))==sqrt(a*1100+b*11))
			cout<<a*1100+b*11;
		}
	}
}
