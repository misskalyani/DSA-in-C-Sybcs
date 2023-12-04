#include<stdio.h>
int main()
{
	int i,n,j,index,a[20],t,min;
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter n numbres::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("n numbres are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=a[i];
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				index=j;
			}
			t=a[i];
			a[i]=a[index];
			a[index]=t;
		}
		
	}
	printf("\n sorted order::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
