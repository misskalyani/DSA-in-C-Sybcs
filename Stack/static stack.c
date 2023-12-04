#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack
{
	int a[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isempty()
{
	if(s.top==-1)
    return 1;
	else
	return 0;
}
int isfull()
{
	if(s.top==MAX-1)
	return 1;
	else
	return 0;
}
void push(int num)
{
	if(isfull())
	printf("stack is full dont push");
	else
	{
		s.top++;
		s.a[s.top]=num;
		printf("\nstack push succec...");
	}
}
void pop()
{
    int val;
	if(isempty())
	printf("stack is empty dont pop");
	else
	{
		val=s.a[s.top];
		s.top--;
		printf("\n poped value=%d",val);
	}
}
void peek()
{
	printf("last element=%d",s.a[s.top]);
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("\t%d\t",s.a[i]);
	}
}
int main()
{
	int ch,num;
	do
	{
		printf("\n1-push\n2-pop\n3-peek\n4-disp");
		printf("enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter num");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:pop();
			       break;  
		  case 3:peek();
			       break;
		  case 4:disp();
			       break;      
		}
	}while(ch<5);
}
