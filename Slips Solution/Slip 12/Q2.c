#include<stdio.h>
#include<stdlib.h>
#include"circulardynamicQ.h"
int main()
{
  int ch,num;
  initq();
  do{
      printf("\n1 :: enqueue. \n 2 :: dequeue \n 3 :: display");
      printf("\nEnter choice :: ");
      scanf("%d",&ch);
      switch(ch)
      {
      case 1 : printf("Enter number to insert :: ");
               scanf("%d",&num);
               enqueue (num);
               break;
      case 2 : dequeue();
               break;
      case 3 : display(); 
                break;
            
      }
  }while(ch<4);
}
