#include <stdio.h> 
#define MAX 5 
int main() 
{ 
 	char ch; 
 	int i,queue[MAX],front=-1,rear=-1; 
 	setbuf(stdout, NULL); 
 	do 
 	{ 
 		if((front == rear + 1) || (front == 0 && rear == MAX-1)) 
 		{ 
 			printf("\nQueue is Full!!"); 
 			return 0; 
 		} 
 		else 
 		{ 
 			if(front == -1) 
 			front = 0; 
 			rear=(rear+1)%MAX; 
 			printf("\nEnter element to Insert:"); 
 			scanf("%d",&queue[rear]); 
 		} 
 		printf("\nAfter Insertion position of Front=%d and Rear=%d",front,rear); 
 		printf("\nDo you want to insert more elements?"); 
 		scanf(" %c",&ch);  
	}while(ch=='y'||ch=='Y'); 
 	printf("\n**** Elements in Queue*****\n"); 
 	for(i=front; i!=rear; i=(i+1)%MAX) 
 	printf("%d ",queue[i]); 
 	printf("%d ",queue[i]); 
 	return 0; 
} 

