#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
#define nodealloc (node *)malloc(sizeof(node *));
node *create(node *list)
{
node *temp,*newnode;
int i,n;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=nodealloc;
printf("enter vallue");
scanf("%d",&newnode->data);
if(list==NULL)
{
list=temp=newnode;
list->next=list;
}
else
{
temp->next=newnode;
temp=newnode;
newnode->next=list;
}
}return list;
}
void disp(node *list)
{
node *temp;
temp=list;
do
{
printf("%d\t",temp->data);
temp=temp->next;
}while(temp!=list);
}
node *append(node *list,int n)
{
	int num,i;
  node *newnode,*temp;
  for(temp=list;temp->next!=list;temp=temp->next);
  for(i=0;i<n;i++)
  {
  	printf("ENter number:");
  	scanf("%d",&num);
  	newnode=nodealloc;
    newnode->data=num;
    temp->next=newnode;
    temp=newnode;
  }
  temp->next=list;
  return list;
}
int main()
{
node *list=NULL;
int n,ch;
do
{
printf("enter choice\n1-create\n2-disp\n3-append=\t");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:printf("enter number of elements to append");
       scanf("%d",&n);
       list=append(list,n);
break;
}
}while(ch<4);
}
