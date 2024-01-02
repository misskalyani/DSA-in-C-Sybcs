#include <stdio.h> 
#define MAX 5 
int main() 
{ 
 	char ch; 
 	int queue[MAX]={10,20,30,40,50}; 
 	int i,front=0,rear=MAX-1; 
 	printf("\nElements in Queue\n"); 
 	for(i=front; i!=rear; i=(i+1)%MAX) 
 	printf("%d ",queue[i]); 
 	printf("%d ",queue[i]); 
 	printf("\nDo you want to delete element?"); 
 	scanf(" %c",&ch); 
 	while(ch=='y'||ch=='Y') 
 	{ 
 		if(front==-1) 
 		{ 
 			printf("\nQueue is Empty!!"); 
 			return 0; 
 		} 
 		else 
 		{ 
 			printf("Deleted Element is %d",queue[front]); 
 			if (front == rear) 
 			{ 
 				front = -1; 
 				rear = -1; 
 			} 
 			else 
 			front=(front +1)%MAX; 
 		} 
 		printf("\nAfter Deletion position of Front=%d and Rear=%d ",front,rear); 
		printf("\n\nDo you want to delete element?"); 
 		scanf(" %c",&ch); 
 	} 
 	if(front==-1) 
 	printf("\nQueue is Empty!!"); 
 	else 
 	{ 
 		printf("\n**** Elements in Queue*****.\n"); 
 		for(i=front; i!=rear; i=(i+1)%MAX) 
 		printf("%d ",queue[i]); 
 		printf("%d ",queue[i]); 
	} 
} 
