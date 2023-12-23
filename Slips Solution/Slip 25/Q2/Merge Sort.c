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
   if((fp=fopen("employee.txt","r"))!=NULL) 
   { 
      while(!feof(fp)) 
      { 
         fscanf(fp,"%s%d",&a[i].name,&a[i].age); 
         i++; 
      } 
   } 
   return i-1; 
} 
mergesort(struct employee a[10],int lb,int ub) 
{ 
    int mid; 
    if(lb<ub) 
     { 
        mid=(lb+ub)/2; 
        mergesort(a,lb,mid); 
        mergesort(a,mid+1,ub); 
     } 
} 
merge(struct employee a[10],int lb,int mid,int ub) 
{ 
    struct employee b[20]; 
    int k,i,j; 
    k=0; 
    i=lb; 
    j=mid+1; 
    while(i<=mid && j<=ub) 
     { 
       if(strcmp(a[i].name,a[j].name)<0) 
         {
            b[k]=a[i]; 
            i++; 
            k++; 
          } 
       else 
         {
            b[k]=a[j]; 
            j++; 
            k++; 
          } 
      } 
    while(i<=mid)  
     { 
        b[k]=a[i]; 
        i++;   
        k++; 
     } 
    while(j<=ub)
     { 
         b[k]=a[j]; 
         j++; 
         k++; 
     } 
    for(i=lb,k=0;i<=ub;k++,i++) 
      { 
	     a[i]=b[k]; 
	  } 
} 
void writeFile(struct employee a[],int n) 
{ 
    int i=0; 
    FILE *fp; 
    if((fp=fopen("sortedemp_merge.txt","w"))!=NULL) 
     { 
	     for(i=0;i<n;i++) 
		    { 
				fprintf(fp,"%s %d\n",a[i].name,a[i].age); 
			} 
	 } 
} 
int main() 
{
 	int n; 
	n=readFile(emp); 
	if(n==-1) 
	printf("File not found "); 
	else 
	{ 
	   mergesort(emp,0,n-1); 
	   writeFile(emp,n); printf("file sorted..");
     }
 }
