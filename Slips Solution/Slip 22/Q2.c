#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp 
{
	int age;
	char name[20]; 
}e1[20];
void sentinel(struct emp e1[100],int n)
{
    char key[20];
	printf("enter emp name::");
	scanf("%s",&key);
	strcpy(e1[n].name,key);
	int i=0;
	while(strcmp(e1[n].name,key)!=0)
	{
	 i++;	
	}	
	if(i<n)
	printf("%s  age=%d",key,e1[i].age);
	else
	printf("key not found");
}
int main()
{
	int i,n;
	FILE*f1;
	f1=fopen("emp.txt","r");
	if(f1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	i=0;
	while(!feof(f1))
	{
		fscanf(f1,"%s%d",&e1[i].name,&e1[i].age);
		i++;
	}
    n=i-1;
    sentinel(e1,n);
    fclose(f1);
}
