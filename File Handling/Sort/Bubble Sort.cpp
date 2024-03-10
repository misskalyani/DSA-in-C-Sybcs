#include<stdio.h>
struct emp
{
   int age;
   char name[20];
}e1[100],t;
void bubble(struct emp e1[100],int n)
{
   int pass,i;
   for(pass=1;pass<n;pass++)
   {
      for(i=0;i<n-pass;i++)
      {
        if(e1[i].age>e1[i+1].age)
	 	{
		t=e1[i];
		e1[i]=e1[i+1];
		e1[i+1]=t;
	 	}
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
   printf("\nBUBBLE SORTED DATA:");
   bubble(e1,n);
}
