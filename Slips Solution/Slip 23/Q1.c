#include <stdio.h>
#include <stdlib.h>
#include"priorityQ.h"
#define MAX 5
int main()
{
   int n, ch;
   do
    {
	
      	printf("\n1 - Insert an element into queue");
        printf("\n2 - Delete an element from queue");
        
        init();
 
        printf("\nEnter your choice : ");    
        scanf("%d", &ch);
 
        switch (ch)
        {
            case 1:printf("\nEnter value to be inserted : ");
                   scanf("%d",&n);
                   insert_by_priority(n);
                   break;
            case 2:printf("\nEnter value to delete : ");
                   scanf("%d",&n);
                   delete_by_priority(n);
                   break;
           
        }
    }while(ch<3);
}
