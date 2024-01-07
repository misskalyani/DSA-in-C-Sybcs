#include<stdio.h>
#include<stdlib.h>
struct Emp
{
      char ename[20];
      int age;
}e1[100];
void merge(struct Emp e1[100],int top,int mid,int bottom)
{
	int i,j,k;
	int n1=mid-top+1;
	int n2=bottom-mid;
	struct Emp e2[50];
	struct Emp e3[50];
	for(i=0;i<n1;i++)
	  e2[i]=e1[i];
	for(j=0;j<n2;j++)
	  e3[j]=e1[mid+1+j];
	i=j=k=0;
	
	while(i<=n1&&j<=n2)
	{
	  if(e2[i].age<e3[j].age)
	    e1[k++]=e2[i++];
	  else
	    e1[k++]=e3[j++];    	
	}  
	while(i<n1)
	    e1[k++]=e2[i++];
	while(j<n2)
	    e1[k++]=e3[j++];

 	
}
void mergesort(struct Emp e1[100],int top,int bottom)
{
	int i,n;
  if(top<bottom)
  {
     int mid=(top+bottom)/2;
     mergesort(e1,top,mid);
     mergesort(e1,mid+1,bottom);
     merge(e1,top,mid,bottom);
  }
   printf("\nsorted order");
   for(i=0;i<n;i++)
   printf("\n %s\t%d",e1[i].ename,e1[i].age);
}

int main()
{
   int i,n;
   FILE *fp1;
   fp1=fopen("employe.txt","r");
   if(fp1==NULL)
   {
          printf("File not found");
          exit(0);
   }
    i=0;
    while(!feof(fp1))
    {
      fscanf(fp1,"%s%d",&e1[i].ename,&e1[i].age);        
      i++;
    }
    for(i=0;i<n;i++)
   printf("\n %s\t%d",e1[i].ename,e1[i].age);

  fclose(fp1); 
  n=i;
   mergesort(e1,0,n);
   

}
