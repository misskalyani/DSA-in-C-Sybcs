#include<stdio.h>
int main()
{
	char emp[100][100],ename[20];
	int i,n,flag=0,mid,top,bottom;
	printf("Enter limit::");
	scanf("%d",&n);
	printf("Enter n emp name::");
	for(i=0;i<n;i++)
	{
		scanf("%s",&emp[i]);
	}
	printf("\nEnter City Name To Search::");
	scanf("%s",ename);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(strcmp(emp[mid],ename)==0)
		{
			flag=1;
			break;
		}
		if(strcmp(emp[mid],ename)<0)
		    top=mid+1;
		else
		     bottom=mid-1;    
	}
	if(flag==1)
	printf("Ename found");
	else
	printf("Not found");
}
