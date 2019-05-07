#include<bits/stdc++.h>
using namespace std;
char m(int a)
{
	if(a>=0&&a<=9) return '0'+a;
	if(a>9&&a<16) return 'A'+a-10;
}
main()
{
	int a,b,i,c,g[32]={0},h[32]={0},s=0;
	char n[32]={0};
	cin>>a;
	gets(n);
	cin>>b;
	c=strlen(n);
	for(i=0;i<c;i++)
	{
		if(n[i]>'/'&&n[i]<':')
		{
			g[i]=n[i]-'0';
		}
		else if(n[i]>='a'&&n[i]<='f')
		{
			g[i]=n[i]-'a'+10;
		}
		else if(n[i]>='A'&&n[i]<='F')
		{
			g[i]=n[i]-'A'+10;
		}
	}
	for(i=0;i<c-1;i++)
	{
		s+=pow(g[i],a);
	}
	i=0;
	while(g[c-1]>b)
	{
		h[31-i]=g[c-1]%b;
		g[c-1]/=b;i++;
	}
	h[31-i]=g[c-1];c=31-i;
	for(i=30;i>=c;i--)
	{
		n[i]=m(h[30-i]);
	}
	for(i=0;i<32;i++)
	cout<<n[i];
}
