#include<bits/stdc++.h>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int score;
}s[3]={{"xiaoming",'f',356},{"xiaoliang",'f',350},{"xiaohong",'m',909}};
main()
{
	student *p;
	cout<<"Name    Sex  Score"<<endl;
	for(p=s;p<s+3;p++)
	printf("%-9s%3c%7d\n",p->name,p->sex,p->score);
}
