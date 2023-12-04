#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n)
{
	int i;
	printf("enter number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void disp(int a[],int n)
{
	int i;
	printf("numbres are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
void merge(int a[],int s,int mid,int e)
{
	int b[30],i,j,k,n;
	i=s;
	j=mid+1;
	k=0;
	while((i<=mid)&&(j<=e))
	{
		if(a[i]<a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=e)
		b[k++]=a[j++];
 	printf("sorted numbers are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",b[i]);
	}
}
void divide(int a[],int s,int e)
{
	int mid;
	if(s<e)
	{
		mid=(s+e)/2;
		divide(a,s,mid);
		divide(a,mid+1,e);
		merge(a,s,mid,e);
	}
}
int main()
{
	int a[100],n;
	printf("enter limit:");
	scanf("%d",&n);
	accept(a,n);
	disp(a,n);
	divide(a,0,n-1);
}
