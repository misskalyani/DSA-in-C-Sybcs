
#include<stdio.h>
#include<stdlib.h>
#include"dynamicQ.h"
int main()
{ 
    int ch,num;
    init();
    do
     {
        printf("\n1.Add \n2.Delete\n3peek");
        printf("\nEnter choice::");
        scanf("%d",&ch);
        switch(ch)
           {
              case 1:printf("\nEnter element::");
                     scanf("%d",&num);
                     Add(num);
                     break;
              case 2:if(isempty()==1)
                     printf("\n Queue is empty");
                     else
                       {
                            printf("deletedelement is %d",Delete());
                            break;
                        }
              case 3:printf("Elemenent at peek %d ",peek());
                    break;
}
}while(ch!=0);
}
