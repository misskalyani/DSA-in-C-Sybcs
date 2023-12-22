#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *create(NODE *list)
{
	NODE *newnode,*temp;
	int i,n;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		printf("enter value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			temp=list=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
NODE *sort(NODE *list)
{
	NODE *i,*j;
	int t;
	for(i=list;i!=NULL;i=i->next)
	{
		for(j=list;j!=NULL;j=j->next)
		{
	    	if(i->data<j->data)
	       {
		   
			 t=i->data;
	    	 i->data=j->data;
	         j->data=t;
     	   }
   	    }
    }
    return list;
}
NODE *disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("\t%d\t",temp->data);
	}
}
int main()
{
    NODE *list = NULL;
    list = create(list);
    printf("\nLinked list before sorting:\n");
    disp(list);
    list = sort(list);
    printf("\n\nLinked list after sorting:\n");
    disp(list);
    printf("\n");

    return 0;
}


