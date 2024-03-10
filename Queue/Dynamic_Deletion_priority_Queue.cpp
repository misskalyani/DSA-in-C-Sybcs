#include<stdio.h> 
#include<stdlib.h> 
void insert(); 
void delete(); 
void display(); 
struct node 
{ 
 	int data, priority; 
 	struct node *next; 
}*start; 
int main() 
{ 
 	int ch; 
 	printf("\n*** Priority Queue Menu ***"); 
 	printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit"); 
 	while(1) 
 	{ 
 		printf("\nEnter the Choice(1.Insertion 2.Deletion 3.Display 4.Exit):"); 
 		scanf("%d",&ch); 
 		switch(ch) 
 		{ 
 			case 1: 
 					insert(); 
 					break; 
 			case 2: 
 					delete(); 
 					break; 
 			case 3: 
 					display(); 
 					break; 
 			case 4: 
 					exit(0); 
 			default: 
 					printf("\nWrong Choice!!"); 
 		} 
 	} 
 	return 0; 
} 
void insert() 
{ 
 	int data, pr; 
 	printf("\nEnter element and its priority: "); 
 	scanf("%d%d",&data,&pr);
 	struct node *temp, *t; 
 	temp = (struct node *)malloc(sizeof(struct node));
 	temp->data=data; 
 	temp->priority=pr; 
 	temp->next=NULL; 
 	if(start==NULL) 
 		start = temp; 
 	else if(start->priority>pr) 
 	{ 
 		temp->next=start; 
 		start=temp; 
	} 
 	else 
 	{ 
 		t=start; 
 		while(t->next!=NULL && (t->next)->priority<=pr ) 
 		t=t->next; 
 		temp->next=t->next; 
 		t->next=temp; 
 	} 
} 
void delete() 
{ 
 	if(start!=NULL) 
 	{ 
 		printf("\nRemoved Element: %d",start->data); 
 		start = start->next; 
 	} 
 	else 
 		printf("\nQueue is Empty"); 
} 
void display() 
{ 
 	printf("\n**** Elements in Circular Queue*****\n"); 
 	struct node *temp1 = start; 
 	while(temp1!=NULL) 
 	{ 
 		printf("\nData=%d Priority=%d ",temp1->data, temp1->priority); 
 		temp1=temp1->next; 
	} 
} 
