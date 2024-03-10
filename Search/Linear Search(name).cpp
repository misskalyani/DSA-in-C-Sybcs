#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100];
int main()
{
	char sname[20];
	int i,n,flag=0;
	printf("ENTER LIMIT::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter rno name per::");
		scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	printf("\nenter student name to search::");
	scanf("%s",&sname);
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i].name,sname)==0)
	    {
		   flag=1;
	       break;
	    }
	}
	if(flag==0)
	printf("number is not found");      
	else
	printf("number is found rno=%d\tper=%f",s1[i].rno,s1[i].per);  
}
