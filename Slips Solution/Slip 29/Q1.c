#include<stdio.h>
#include<stdlib.h>
#include"staticstack.h"

int main()
{
	int ch,num;
	do
	{
		printf("\n1-push\n2-peek\n3-disp");
		printf("\n\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter num");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:printf("peeked value=%d",peek());
			       break;  
		    case 3:disp();
			       break;  
		      
		}
	}while(ch<4);
}
