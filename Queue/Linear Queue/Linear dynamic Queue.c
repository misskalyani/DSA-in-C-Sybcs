
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
  struct node *r;
void init()
{
    r=NULL;
}
int isempty()
{
    if(r==NULL)
       return 1;
    else
       return 0;
}
void Add(int num)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    if(r==NULL)
     {
       r=newnode;
       r->next=r;
     }
    else
     {
       newnode->next=r->next;
       r->next=newnode;
       r=r->next;
     }
}
int Delete()
{
    int num;
    struct node *temp;
    temp=r->next;
    if(r==temp->next)
    {  
      r=NULL;
    }
    else
    {
      r->next=temp->next;
    }
     num=temp->data;
     free(temp);
     return (num);
}
int peek()
{
    return(r->next->data);
}

int main()
{ 
    int ch,num;
    init();
    do
     {
        printf("\n1.Add \n2.Delete\n3peek");
        printf("\nEnter choice::");
        scanf("%d",&ch);
        switch(ch)
           {
              case 1:printf("\nEnter element");
                     scanf("%d",&num);
                     Add(num);
                     break;
              case 2:if(isempty()==1)
                     printf("\n Queue is empty");
                     else
                       {
                            printf("deletedelement is %d",Delete());
                            break;
                        }
              case 3:printf("Elemenent at peek %d ",peek());
                    break;
}
}while(ch!=0);
}
