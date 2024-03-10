#include <stdio.h> 
#include <stdlib.h> 
struct node 
{ 
 	int data; 
 	struct node *next; 
}; 
	struct node *even = NULL; 
	struct node *odd = NULL; 
	struct node *list = NULL; 
void insert(int data)
{ 
 	struct node *newnode = (struct node*) malloc(sizeof(struct node)); 
 	struct node *temp; 
 	newnode->data = data; 
 	newnode->next = NULL; 
 	if(data%2 == 0) 
	{ 
 		if(even == NULL)
		{	 
 			even = newnode; 
 			return; 
 		} 
		else 
		{ 
 			temp = even; 
 			while(temp->next != NULL) 
 			temp = temp->next; 
 			temp->next = newnode; 
 		} 
 	} 
	else 
	{ 
		 if(odd == NULL) 
		 { 
 			odd = newnode; 
 			return; 
 		 } 
		 else 
		 { 
 			temp = odd; 
 			while(temp->next!=NULL) 
 			temp = temp->next; 
 			temp->next = newnode; 
 		 } 
 	} 
} 
void display(struct node *head) 
{ 
 	struct node *temp= head; 
 	while(temp != NULL) 
	{ 
 		printf(" %d ",temp->data); 
 		temp = temp->next; 
 	} 
} 
void combine() 
{ 
 	struct node *temp; 
 	list = even; 
 	temp = list; 
 	while(temp->next!= NULL) 
	{ 
 		temp = temp->next; 
 	} 
 	temp->next = odd; 
} 
int main() 
{ 
 	int i; 
 	for(i = 1; i <= 10; i++) 
 	insert(i); 
 	printf("Even : "); 
 	display(even); 
 	printf("\nOdd : "); 
 	display(odd); 
 	combine(); 
 	printf("\nCombined List :"); 
 	display(list); 
 	return 0;
}
