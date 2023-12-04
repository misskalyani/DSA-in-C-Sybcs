#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,k,n,key,a[20],t;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n numbers:");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
    }
	printf("n numbres are:");
	for(i=0;i<n;i++)
	{
	  printf("\t%d\t",a[i]);
    } 
	for(i=0;i<n;i++)
	{
		 key=a[i];
	    for(k=i-1;k>=0&&key<a[k];k--)
 			{
 				t=a[k+1];
 				a[k+1]=a[k];
   				a[k]=t;
 			}
 		a[k+1]=key;
    }
 	printf("\nsorted order:");
 	for(i=0;i<n;i++)
 		{
 			printf("\t%d\t",a[i]);
 		}
}	
