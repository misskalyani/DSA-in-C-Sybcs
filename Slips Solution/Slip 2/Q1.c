#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
#define memory (node*)malloc(sizeof(node))
int main()
{
	node*head=NULL;
	head=create(head);
	disp(head);
}
