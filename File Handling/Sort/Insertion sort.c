#include<stdio.h>
struct emp
{
   int age;
   char name[20];
}e1[100],t;
void insertion(struct emp e1[100],int n)
{
	int i,j,age1;
	for(i=1;i<n;i++)
	{
		age1=e1[i].age;
		for(j=i-1;j>=0&&e1[j].age>age1;j--)
		{
			t=e1[j+1];
			e1[j+1]=e1[j];
			e1[j]=t;
		}
	}
	
    for(i=0;i<n;i++)
    {
		printf("\n%s	%d",e1[i].name,e1[i].age);
    }
}

int main()
{
   FILE *fp1;
   int i=0;
   fp1=fopen("emp.txt","r");
   if(fp1==NULL)
   {
	printf("File Is Empty");
   }
   while(!feof(fp1))
   {
        fscanf(fp1,"%s%d",&e1[i].name,&e1[i].age);
	i++;
   }
   int n=i-1;
   printf("\nORIGINAL DATA:");
   
   for(i=0;i<n;i++)
   {
	printf("\n%s	%d",e1[i].name,e1[i].age);
   }
    printf("\n\n");
    printf("\nINSERTION SORTED DATA:");
    insertion(e1,n);
}
