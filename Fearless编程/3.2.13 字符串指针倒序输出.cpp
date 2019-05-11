#include<bits/stdc++.h>
using namespace std;
void sw(char &a,char &b)
{
	char t;
	t=a;a=b;b=t;
}
void w(char *st)
{
	int l=strlen(st);
	for(int i=0;i<=l/2;i++)
	sw(st[i],st[l-i-1]);
}
main()
{
	char s[100];
	char *st=s;
	gets(s);
	w(st);
	printf("%s",s);
}
