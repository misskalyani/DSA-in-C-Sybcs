#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node* init(struct node *list)
{
   list=NULL;
   return list;
}
int isempty(struct node *list)
{
    if(list==NULL)
      return 1;
    else
     return 0;
}
struct node * AddQueue(struct node *list ,int num)
{
   struct node *temp,*newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   if(isempty(list))
   {
       list=newnode;
       newnode->next=list;
       return list;
   }
   else
   {
      for(temp=list;temp->next!=list;temp=temp->next);
      temp->next=newnode;
      newnode->next=list;  
      return list;
   }   
}
int peek(struct node *list)
{
   struct node *temp;
   for(temp=list;temp->next!=list;temp=temp->next);
   return temp->data;
} 
struct node *delq(struct node *list)
{
   struct node *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp1=list;
    list=list->next;
    temp->next=list;
    printf("\n Deleted value=%d",temp1->data);
    free(temp1);
  return list;
}

int main()
{
    struct node *list;
    int ch,num;
     list=init(list);
    do
   {
      printf("\n 1-add \n2-peek\n3-del");
      printf("\nenter choice::");
	  scanf("%d",&ch);
      switch(ch)
      {
          case 1: printf("Enter number:");
                       scanf("%d",&num);
                       list=AddQueue(list,num);
                       break;
         case 2: printf("\n Last element=%d",peek(list));
                     break;
         case 3: if(isempty(list))
		            printf("Queue is empty");
					else
				list=delq(list);
					  break;
      }
   }while(ch<4);   
}


