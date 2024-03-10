#include<stdio.h>
int main()
{
	int a[100],i,n,num,top,bottom,mid,flag=0;
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter n numbres");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	printf("enter num to search");
	scanf("%d",&num);
    top=0,bottom=n-1;
	for(i=0;i<n;i++)
	{
		mid=(top+bottom)/2;
		if(a[mid]==num)
		{
		flag=1;
		break;
		}
		if(num<a[mid])
		bottom=mid-1;
		else
		top=mid+1;
	}
	if(flag==1)
	printf("num found");
	else
	printf("num not found");
}
