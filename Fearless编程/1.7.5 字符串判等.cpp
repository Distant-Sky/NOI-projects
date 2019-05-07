#include<cstring>
#include<cstdio>
using namespace std;
main()
{
	char s[256],t[256],a[256],b[256];
	int i,k=0,l=0;
	gets(s);gets(t);
	strlwr(s);strlwr(t);
	for(i=0;i<strlen(s);i++)
	if(s[i]!=' ') a[k++]=s[i];
	for(i=0;i<strlen(t);i++)
	if(t[i]!=' ') b[l++]=t[i];
	if(strcmp(a,b)==0) printf("YES\n");
	else printf("NO\n");
}
