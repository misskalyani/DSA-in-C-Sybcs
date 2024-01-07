#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	char name[20];
	int age;
}emp[10];
int readFile(struct employee a[])
{
	int i=0;
	FILE *fp;
	if((fp=fopen("emp.txt","r"))!=NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%s%d",&a[i].name,&a[i].age);
			i++;
		}
	}
	return i-1;
}
void quicksort(struct employee a[10],int lb,int ub)
{ 
	int i,j;
	struct employee key,temp;
	if(lb<ub)
	{
		i=lb+1;
		key=a[lb];
		j=ub;
		while(i<=j)	
		{
			while(a[i].age<=key.age && i<=ub)
			i++;
			while(a[j].age>key.age && j>=lb)
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[lb];
		a[lb]=temp;
		quicksort(a,lb,j-1);
		quicksort(a,j+1,ub);	
	}
}
void writeFile(struct employee a[],int n)
{
	int i=0;
	FILE *fp;
	if((fp=fopen("sortedemp_quick_age.txt","w"))!=NULL)
	{
		for(i=0;i<n;i++)
		{ 	
			fprintf(fp,"%s %d\n",a[i].name,a[i].age);
		}
	}
}
main()
{	
	int n;
	n=readFile(emp);
	if(n==-1)
	printf("File not found ");
	else
	{
		quicksort(emp,0,n-1);
		writeFile(emp,n);
		printf("File Sorted ");
	}
}
