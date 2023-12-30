#include <stdio.h> 
void display(); 
struct node 
{ 
 	int data; 
 	struct node *next; 
}; 
int main() 
{ 
 	struct node n4={40,NULL}; 
 	struct node n3={30,&n4}; 
 	struct node n2={20,&n3}; 
 	struct node n1={10,&n2}; 
 	struct node* head=&n1; 
 	printf("Elements of linked list\n"); 
 	struct node *temp=head; 
 	while(temp!=NULL) 
 	{ 
 		printf("%d\t",temp->data); 
 		temp=temp->next; 
 	} 
} 

