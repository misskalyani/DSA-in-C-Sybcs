#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100],t;
int main()
{
	int i,n,pass;
	printf("Enter Limit::");
	scanf("%d",&n);
	printf("Enter n studentr info::");
	for(i=0;i<n;i++)
	{
		printf("Enter rno name per::");
		scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(s1[i].per>s1[i+1].per)
			{
				t=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=t;
			}
		}
	}
	printf("\n Display sorted order student info::");
	for(i=0;i<n;i++)
	{
		printf("\n\t%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
	}
}

