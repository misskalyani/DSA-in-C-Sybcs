#include<stdio.h>
int orderlist(int a[],int n,int num)
{
	int i,sentinel,compcount;
	sentinel=a[n-1];
	if(num>sentinel)
	{
		return -1;
	}
	i=0;
	while(a[i]<num&&a[i]!=sentinel)
	{
		compcount++;
		i++;
	}
	compcount++;
	if(num=a[i])
	printf("Key Found");
	else
	printf("Key Not Found");
}
int main()
{
	int i,n,num,a[20],ch;
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements Are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	printf("\nenter num to search::");
	scanf("%d",&num);
	orderlist(a,n,num);
}
