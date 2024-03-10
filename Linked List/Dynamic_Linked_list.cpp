#include <stdio.h> 
#include <stdlib.h> 
void display(); 
struct node 
{ 
 	int data; 
 	struct node *next; 
}*head=NULL; 
int main(void) 
{ 
 	int num,n,i; 
 	char ch; 
 	struct node *q, *tmp; 
 	printf("Enter Limit::\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		tmp=malloc(sizeof(struct node)); 
 		printf("Enter element :\n"); 
 		scanf("%d",&num); 
 		tmp->data=num; 
 		tmp->next=NULL; 
 		if(head==NULL) 
 		head=tmp; 
		else 
 		{ 
 			q=head; 
 			while(q->next!=NULL) 
 			q=q->next; 
 			q->next=tmp; 
 		}
	}
 	display(); 
 	return 0; 
} 
void display() 
{ 
 	struct node *q; 
 	if(head==NULL) 
 	printf("List is empty!!\n"); 
 	else 
 	{ 
 		printf("Elements in Linked List\n"); 
 		q=head; 
 		while(q!=NULL) 
 		{ 
 			printf("%d\t",q->data); 
 			q=q->next; 
 		} 
 	} 
} 


