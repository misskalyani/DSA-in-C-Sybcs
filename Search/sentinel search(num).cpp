#include<stdio.h>
void sentinel(int a[],int num,int n)
{
    int last=a[n-1];
	int i=0;
	a[n-1]=num;	
	while(a[i]!=num)
	i++;
	if(i<n-1||num==last)
	printf("num found pos=%d");
	else
	printf("not found");
}
int main()
{
	int i,n,num,a[100];
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter n numbres");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n enter num to search");
	scanf("%d",&num);
     sentinel(a,n,num);
}
