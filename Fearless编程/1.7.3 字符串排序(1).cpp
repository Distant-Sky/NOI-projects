#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char s[21],c[11][21];
	int i,j,k;
	for(i=1;i<=10;i++)
	gets(c[i]);
	for(i=1;i<=9;i++)
	{
		k=i;
		for(j=i+1;j<=10;j++)
		{
			if(strcmp(c[k],c[j])>0) k=j;
		}
		strcpy(s,c[i]);
		strcpy(c[i],c[k]);
		strcpy(c[k],s);
	}
	for(i=1;i<=10;i++)
	cout<<c[i]<<endl;
}
