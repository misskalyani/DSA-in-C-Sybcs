#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
int main()
{
	node *head=NULL;
	int ch,num;
	do
	{
		printf("\n1-create\n2-disp\n3-reverse");
	    printf("\nenter choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=create(head);
			       break;
			case 2:disp(head);
			       break; 
			case 3:head=reverse(head);
			       break;	         
		}
	}while(ch<3);
}
