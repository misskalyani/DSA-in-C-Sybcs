#include<stdio.h>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
typedef struct node
{
	int data;
	struct node*next;
}node,head1,head2;
node *create(node*head)
{
	struct node*newnode,*temp;
	int i, n,num;
	printf("\n\nenter limit:");
	scanf("%d",&n);
   for(i=0;i<n;i++)
	{
	newnode=memory;
	printf("\nenter value::");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
	return head;
}
node *disp(node*head)
{
	node*temp;
    printf("\n MERGE LINKED LIST IS:: ");
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
node *append(node* head,int num)
{
	node *newnode,*temp;
	newnode=memory;
	newnode->data=num;
	newnode->next=NULL;
	if(head==NULL)
	{
		return newnode;
	}
	else
	{
		for(temp=head;temp->next!=NULL;temp=temp->next);
		temp->next=newnode;
		return head;
	}
}
node*merge(node*head1,node*head2)
{
	node*temp2=head2,*head3=NULL,*temp1=head1;
	while(temp1!=NULL&&temp2!=NULL)
	{
		if(temp1->data<temp2->data)
		{
			head3=append(head3,temp1->data);
			temp1=temp1->next;
		}
		else
		{
			head3=append(head3,temp2->data);
			temp2=temp2->next;
		}
	}
	while(temp1!=NULL)
	{
		head3=append(head3,temp1->data);
		temp1=temp1->next;
	}
	while(temp2!=NULL)
	{
		head3=append(head3,temp2->data);
		temp2=temp2->next;
	}
	return head3;
}
int main()
{
	node*head1=NULL,*head2=NULL,*head3=NULL;
	head1=create(head1);
	head2=create(head2);
	head3=merge(head1,head2);
	disp(head3);
}
