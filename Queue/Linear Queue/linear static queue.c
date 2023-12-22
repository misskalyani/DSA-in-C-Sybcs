#include<stdio.h>
#define MAX 5

struct queue 
{
   int data[MAX];
   int front, rear;
};
void initQ(struct queue *q) 
{
    q->front = q->rear = -1;
}
int isEmptyQ(struct queue *q)
{
   if(q->front == q->rear)
     return 1;
   else
     return 0;
}
int isFullQ(struct queue *q)
{
    if (q -> rear == MAX - 1)
      return 1;
    else
      return 0;
}
void insertQ(struct queue *q, int num)
{
    if(isFullQ(q))
        printf("Queue is Overflow\n");
    else
    	q ->data[++(q -> rear)] = num;
}
int deleteQ(struct queue *q)
{
    if(isEmptyQ(q))
        printf("Queue is Underflow\n");
    else
	    return (q -> data[++(q -> front)]);
}
void display(struct queue *q)
{
    int i;
    printf("\nQueue contents are:\t");
    for(i = q -> front + 1 ;i <= q -> rear; i++)
   {
      printf(" %d\t", q -> data[i]);
   }
}
int peek(struct queue *q)
{
   return q->data[q->rear];
}
int main()
{
    struct queue q1;
    int ch,num;
    initQ(&q1);
    do
    {
       printf("\n1-Insert\n2-Delete\n3-display\n4-peek");
      
	   printf("\nEnter your choice");
       scanf("%d",&ch);
       switch(ch)
         {
            case 1: printf("Enter element to be insert\n");
                    scanf("%d",&num);
                    insertQ(&q1,num);
                    break;
            case 2: printf("Deleted element is %d\n",deleteQ(&q1));
					break;
            case 3: display(&q1);
                    break;
            case 4: printf("peek element is %d\n",peek(&q1));
			        break;     
        }
    }while(ch<5);
}

