#include<stdio.h>
#define MAX 5
struct stack
{
   int a[MAX];
   int top;
}s1,s2;
void init(struct stack *s)
{
  s->top=-1;
}
int isempty(struct stack *s)
{
  if(s->top==-1)
    return 1;
  else
    return 0;
}
int isfull(struct stack *s)
{
   if(s->top==MAX-1)
     return 1;
   else
     return 0;
}
void push(struct stack *s,int num)
{
  if(isfull(s))
  {
     printf("Stack is full");
  }
  else
  {
    s->top++;
    s->a[s->top]=num;
  }
}
int pop(struct stack *s)
{
  int val;
   if(isempty(s))
   {
      printf("Stack is empty");
   }
   else
   {
     val=s->a[s->top];
     s->top--;
   }
   return val;
}
int main()
{
	
  int n,i,val;
  init(&s1);
  init(&s2);
  printf("Enter limit:");
  scanf("%d",&n);
  printf("Enter values ion stack1:");
  for(i=0;i<n;i++)
  {
  	printf("Enter value:");
  	scanf("%d",&val);
  	push(&s1,val);
  }
  printf("Enter values in stack2:");
  for(i=0;i<n;i++)
  {
  	printf("Enter value:");
  	scanf("%d",&val);
  	push(&s2,val);
  }
 while(!isempty(&s1)&&!isempty(&s2))
 {
   if(pop(&s1)!=pop(&s2))
      break;
 }
if((isempty(&s1))&&(isempty(&s2)))
    printf("Identical");
else
   printf("not identical......");
}

