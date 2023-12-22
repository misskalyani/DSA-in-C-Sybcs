#include<stdio.h>
int partition (int a[],int low,int high)
{
	int j,t;
	int pivot=a[high];
	int i=(low-1);
	for(j=low;j<high-1;j++)
	{
		if(a[j]<=pivot)
		{
		  i++;
		  t=a[i];
		  a[i]=a[j];
		  a[j]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[high];
	a[high]=t;
	return(i+1);
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int j;
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int main()
{
	int a[100],i,n;
	printf("emter limit::");
	scanf("%d",&n);
	printf("enter n numbers ::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n n numbers are::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nsorted order::");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
}
