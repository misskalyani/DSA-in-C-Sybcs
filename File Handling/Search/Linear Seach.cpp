#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1;
	int flag=1,code;
	char name[20],s1[20];
	fp1=fopen("city.txt","r");
	if(fp1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	printf("enter city name to search");
	scanf("%s",&s1);
	while(!feof(fp1))
	{
		fscanf(fp1,"%s%d",&name,&code);
		if(strcmp(name,s1)==0)
		{
			flag=0;
			break;
		}
	}
	fclose(fp1);
	if(flag==0)
	printf("\n std code=%d",code);
	else
	printf("city not in the list");
	
}
