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
	int i,n,flag=0,rnum;
	printf("ENTER LIMIT::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter rno name per::");
		scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	printf("\nenter roll number to search::");
	scanf("%d",&rnum);
	for(i=0;i<n;i++)
	{
		if(s1[i].rno==rnum)
	    flag=1;
		break;
	}
	if(flag==1)
	printf("number is not found");
	else
	printf("number is found name=%s\tper=%f",s1[i].name,s1[i].per);
}
