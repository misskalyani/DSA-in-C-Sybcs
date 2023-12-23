#include<stdio.h>
int main()
{
	char s1[100][100],city[20];
	int i,n,flag=0,mid,top,bottom;
	printf("Enter limit::");
	scanf("%d",&n);
	printf("Enter n City name::");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	printf("\nEnter City Name To Search::");
	scanf("%s",city);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(strcmp(s1[mid],city)==0)
		{
			flag=1;
			break;
		}
		if(strcmp(s1[mid],city)<0)
		    top=mid+1;
		else
		     bottom=mid-1;    
	}
	if(flag==1)
	printf("city found");
	else
	printf("city Not found");
}
