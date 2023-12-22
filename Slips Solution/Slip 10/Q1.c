#include<stdio.h>
#include"staticQ.h"
int main()
{
	int ch,num,i,n;
	
	init();
	do
    {
       printf("\n1-Insert\n2-peek");
       printf("\nEnter your choice");
       scanf("%d",&ch);
       switch(ch)
         {
         	case 1: printf("Enter element to be insert\n");
                    scanf("%d",&num);
                    enqueue(num);
                    break;
            case 2: printf("peeked element is %d\n", peek());        
                    break;
         }
    }while(ch<3);
}
