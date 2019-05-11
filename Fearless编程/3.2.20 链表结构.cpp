#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;node *next;
};
node *head,*p,*r;
int x;
main()
{
	cin>>x;head=new node;r=head;
	while(x!=-1)
	{
		p=new node;
		p->data=x;
		p->next=NULL;r->next=p;
		r=p;
		cin>>x;
	}
	p=head->next;
	while(p->next!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	cout<<p->data<<endl;
}

