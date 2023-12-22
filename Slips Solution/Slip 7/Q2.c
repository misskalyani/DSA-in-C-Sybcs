#include<stdio.h>
#include<stdlib.h>
#include"staticstack.h"

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
