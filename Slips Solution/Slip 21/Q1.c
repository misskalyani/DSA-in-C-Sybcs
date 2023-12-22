#include<stdio.h>
#include<stdlib.h>
#include"staticstack.h"
int main()
 {
 	char ch[10];
	 int i;
    
 	init();
 	printf("enter string:");
 	scanf("%s",&ch);
 	for(i=0;ch[i]!='\0';i++)
 	{
 		push(ch[i]);
	}
  disp();
 }
