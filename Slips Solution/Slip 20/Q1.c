#include<stdio.h>
#include<stdlib.h>
#include"staticstack.h"

int main()
{
	int ch,num;
	do
	{
		printf("\n1-push\n2-pop");
		printf("\n\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter num");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:pop();
			       break;  
		      
		}
	}while(ch<3);
}