#include<stdio.h>              
#include<stdlib.h>
#include<math.h>

#define Memory (NODE*)malloc(sizeof(NODE))

typedef struct node
{                               
       int coef;
       int expo;
       struct node *next;
}NODE;


NODE *create(NODE *list)
{
      NODE *newnode, *temp;
      int n,i;
      printf("\nEnter Limit  ::  ");
      scanf("%d",&n);
         for(i=n-1;i>=0;i--)
        {
                  newnode=Memory;
                  printf("ENTER COEF  ::  ");
                  scanf("%d",&newnode->coef);
                  newnode->expo=i;
                  newnode->next=NULL;
 
                      if(list==NULL)
                          {
                                    list=temp=newnode;
                          }
                      else 
                         {
                                    temp->next=newnode;
                                    temp=newnode;
                          }
        }
                return list;
}


void disp(NODE *list)
{
               NODE *temp;
               
               printf("\n The Entered Polynomial is ::   ");
              for(temp=list;temp!=NULL;temp=temp->next)
            {
                       printf("%dx^%d +",temp->coef,temp->expo);
             }
                printf("\b ");
}

 int main()
 {
       NODE *list=NULL;
       list=create(list);
       disp(list);
       
 }
