#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1;
	int i,num,mid,top,bottom,flag=0,x,a[10],n;
	fp1=fopen("num.txt","r");
	if(fp1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(fp1))
	{
		fscanf(fp1,"%d",&num);
		a[i++]=num;
	}
	n=i;
	printf("enter num to search::");
	scanf("%d",&x);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(x==a[mid])
		{ 
		  flag=1;
		  break;
		}
		if(x>a[mid])
		top=mid+1;
		else
		bottom=mid-1;
	}
	if(flag==1)
	printf("num found");
	else
	printf("not found");
	fclose(fp1);
}
