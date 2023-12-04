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


float evaluate(NODE  *list,int x)
{
        float ans=0;
        NODE *temp;
        for(temp=list;temp!=NULL;temp=temp->next)
        {
                ans=ans+(temp->coef)*pow(x,temp->expo);
        }      
                return ans;
}
     
 int main()
 {
       float value;
       int x;
       NODE *list=NULL;
       list=create(list);
       disp(list);
       
       printf("\n\nEnter Value of x  ::  ");
       scanf("%d",&x);
       value=evaluate(list,x);
       printf("\nThe Answer of the expression is :: %f",value);
 }
