#include<iostream>
using namespace std;
struct node
{
	long long int data;
	node *next;
};
void athead(node * &head,long long int key)
{
	node *New=new node;
	New->data=key;
	if(head==NULL)
	{
		head=New;
		New->next=NULL;
	}
	else
	{
		New->next=head;
		head=New;
	}	
}
void atend(node * &head,long long int key)
{
	if(head==NULL)
		{
            athead(head,key);
            return;   //change
        }
	else
	{
		node *temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		node *New=new node;
		New->data=key;
		temp->next=New;
		New->next=NULL;
	}
}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;	
	}
}
void append(node * &head,long long k,long long int n)
{
	node *temp=head;
	node *preptr=head;
	node *start=head;
	int count=0;
	while(count<(n-k)&&temp!=NULL)
		{
			preptr=temp;
			temp=temp->next;
			count++;
		}
	preptr->next=NULL;
	head=temp;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=start;
	
}

int main()
{
	node *head=NULL;
	long long int n,k;
	cin>>n;
	long long int w=n;
	while(n!=0)
	{
		long long int data;
		cin>>data;
		atend(head,data);
		n--;
	}
	cin>>k;
	if(k==0 || k%w==0)  //change
		print(head);
	else
	{
	append(head,k%w,w);
	print(head);
	}
	
}
