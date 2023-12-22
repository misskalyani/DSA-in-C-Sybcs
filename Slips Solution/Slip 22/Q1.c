#include<stdio.h>
#include"staticQ.h"
int main()
{
	int ch,num,i,n;
	
	init();
	do
    {
       printf("\n1-Insert\n2-Delete\);
       printf("\nEnter your choice");
       scanf("%d",&ch);
       switch(ch)
         {
         	case 1: printf("Enter element to be insert\n");
                    scanf("%d",&num);
                    enqueue(num);
                    break;
            case 2: dequeue();      
                    break;
         }
    }while(ch<3);
}

