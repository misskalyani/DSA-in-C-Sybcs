#include<stdio.h>
void countingsort(int a[20],int n,int k)
{
int count[50],b[30],i;
for(i=0;i<=k;i++)
{ count[i]=0;
}
for(i=0;i<n;i++)
{ ++count[a[i]];
}
for(i=1;i<=k;i++)
{ count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{ b[--count[a[i]]]=a[i];
}
//copy sorted array b to original array b
for(i=0;i<n;i++)
{ a[i]=b[i];
}
}
main()
{
int a[20],n,i,max;
printf("Enter how many elements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ a[i]=rand()%10;
}
printf("\n Before sort array is ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{ if(a[i]>max)
max=a[i];
}
countingsort(a,n,max);
printf("\n Afer sorting array is ");
for(i=0;i<n;i++)
{ printf("%d ",a[i]);
}
}
