#include<stdio.h>
struct emp
{
   int age;
   char name[20];
}e1[100],t;
void selection(struct emp e1[100],int n)
{
	int i,j,min,index;
	for(i=0;i<n;i++)
	{
		min=e1[i].age;
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(e1[j].age<min)
			{
				min=e1[j].age;
				index=j;
			}
		}
		t=e1[i];
		e1[i]=e1[index];
		e1[index]=t;
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
    
    printf("\nSELECTION SORTED DATA:");
    selection(e1,n);
} 
