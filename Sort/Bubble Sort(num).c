#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("\t%d\t",&a[i]);
	}
}
void disp(int a[],int n)
{
	int i;
	printf("\n numbers are:");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
void bubble(int a[],int n)
{
	int i,pass,t;
	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("\nsorted order::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
int main()
{
	int a[100],n;
	printf("enter limit:");
	scanf("%d",&n);
	accept(a,n);
	disp(a,n);
	bubble(a,n);
}
