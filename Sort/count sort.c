#include<stdio.h>
void count(int a[],int k,int n)
{
	int c[100]={0},i,b[20];
	for(i=0;i<n;i++)
	c[a[i]]=c[a[i]]+1;
	for(i=1;i<=k;i++)
	c[i]=c[i]+c[i-1];
	for(i=n-1;i>=0;i--)
	{
		b[c[a[i]]-1]=a[i];
		c[a[i]]=c[a[i]]-1;
	}
	printf("\nsorted array::");
	for(i=0;i<n;i++)
	printf("\t%d\t",b[i]);
}
int main()
{
	int a[10],i,k,n;
	printf("enter limit:");
	scanf("%d",&n);
    printf("enter range:");
	scanf("%d",&k);
	printf("enter numbres are::");
    for(i=0;i<n;i++)
    scanf("\t%d\t",&a[i]);
    printf("numbres are::");
    for(i=0;i<n;i++)
    printf("\t%d\t",a[i]);
    count(a,k,n);
}

