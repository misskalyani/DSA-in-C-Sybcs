#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next,*prev;
};
struct node *create (struct node * head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("\n Enter the number of nodes :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter the data : ");
		scanf("%d",&newnode->data);
	                  newnode->next=NULL;
                 	if(head==NULL)
		{
                                     head=temp=newnode;
		}
                                 else
                                 {
                                   temp->next=newnode;
                                   newnode->prev=temp;
                                   temp=newnode; 
                                 }
                 }
      return head;
}
int search(struct node *head,int num)
{
	struct node *temp;
	int i;
	for(temp=head,i=1;temp!=NULL;temp=temp->next,i++)
	{
		if(temp->data>num)
		  return i;
	}
	return i;
}
struct node* insert(struct node* head,int num,int pos)
{
    struct node*newnode,*temp;
     int i;   
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=num;
     if(pos==1)
     {
        newnode->next=head;
          head->prev=newnode;
          head=newnode;
     }
     else
     {
       for(i=1,temp=head;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
       newnode->next=temp->next;
       temp->next->prev=newnode;
       temp->next=newnode;
       newnode->prev=temp;
     }
  return head;
}

void disp(struct node * head)
{
   struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}

int main()
{
  int ch,num,pos;
  struct node *head=NULL;
  do
  {
    printf("\n 1-create \n 2-insert \n 3-disp:");
    printf("\nenter choice::");
	scanf("%d",&ch);
    switch(ch)
    {
       case 1: head=create(head);
		break;
       case 2: printf("Enter the number:");
	       scanf("%d",&num);
	        pos=search(head,num);
		   head=insert(head,num,pos);
	       break;
       case 3: disp(head);
		break;
       default: printf("Wrong choice....");
    }
  }while(ch<4);
}
