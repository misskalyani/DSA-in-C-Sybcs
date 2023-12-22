#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10][10],name[10];
	int i,n,flag=1;
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
	printf("enter name to search::");
	scanf("%s",&name);
	for(i=0;i<n;i++)
	{
		if(strcmpy(s1[i],name)==0)
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
