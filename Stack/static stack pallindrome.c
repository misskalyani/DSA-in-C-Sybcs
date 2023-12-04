#include<stdio.h>
#include<stdlib.h>
#define MAX 7
struct stack
{
	char a[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==MAX-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(s.top==-1)
	return 1;
	else 
	return 0;
}
void push(char ch)
{
	if(isfull())
	printf("stack is overflow");
	else
	{
		s.top++;
		s.a[s.top]=ch;
 	}
}
int pop()
{
	char val;
	if(isempty())
	printf("stack is underflow");
	else
	{
		val=s.a[s.top];
		s.top--;
		return val;
	}
}
int main()
{
	char ch[20];
    int i;
	printf("enter string::");
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
		push(ch[i]);
	}
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=pop())
		break;
	}
	if(isempty())
	printf("pallindrome");
	else
	printf("not pallindrome");
}
