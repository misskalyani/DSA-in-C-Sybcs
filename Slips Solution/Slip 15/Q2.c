#include<stdio.h>
#include<stdlib.h>
#include"lineardynamicQ.h"
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


