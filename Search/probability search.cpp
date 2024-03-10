#include<stdio.h>
int probability(int a[],int n,int num)
{
	int i,temp,compcount;
	for(i=0;i<n;i++)
	{
		compcount++;
		if(a[i]==num)
		{
			if(i!=0)
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
				return i-1;
			}
		}
	}
	return -1;
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
	probability(a,n,num);
	if(i==-1)
	printf("Key NOT Found");
	else
	printf("Key Found");
}
	
