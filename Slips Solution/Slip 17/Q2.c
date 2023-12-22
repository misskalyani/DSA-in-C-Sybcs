#include<stdio.h>
#include<ctype.h>
#define MAX 25
#define"stack.h"
int main()
{
        char p[30],q[30];
        int i,k=0;
        init();
        printf("Enter String 1=");
        scanf("%s",&p);
        for(i=0;p[i]!='\0';i++)
        push(p[i]);

        while(!isempty())
        {
           q[k++]=pop();
        }
        q[k++]='\0';

        for(i=0;q[i]!='\0';i++)
        {
           push(q[i]);
        }

        while(!isempty())
        {
           printf("%c",pop());
        }
    if(isempty())
    printf("\n order Identical");
    else
    printf("\n order not identical......");
}

