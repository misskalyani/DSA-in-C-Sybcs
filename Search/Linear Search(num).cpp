#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,n,flag=1,num,s1[20];
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",s1[i]);
	}
	printf("\nenter num to search::");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(s1[i]==num)
		{
	      flag=0;
	      break;
	    }
	}
	if(flag==1)
	printf("num not found");
	else
	printf("num found pos=%d");
}
