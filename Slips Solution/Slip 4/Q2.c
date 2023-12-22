#include<stdio.h>
#include"staticQ.h"
int main()
{
	int ch,num,i,n;
	init();
	printf("enter limit:");
	scanf("%d",&n);
	printf("Enter number:");
	for(i=0;i<n;i++)
	{
   	           scanf("%d",&num);
		       enqueue(num);

}	
	printf("queue :-");	      
	display();
	printf("\n reverse Queue :");
	reverse ();
}
