#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
 define max 50
  
 struct stack 
 { 
         int a[30]; 
         int top; 
 }s1; 
  
 void init() 
 { 
       s1.top=-1; 
 } 
  
 int isempty() 
 { 
        if(s1.top==-1) 
               return 1; 
         else 
             return 0; 
 } 
  
 int isfull() 
 { 
       if(s1.top==max-1) 
             return 1; 
       else 
            return 0; 
 } 
  
 void push(int num) 
 { 
         if(isfull()) 
         printf("Stack is full \t Don't Push::"); 
       else 
         { 
               s1.top++; 
               s1.a[s1.top]=num; 
               
         } 
 } 
  
 int pop() 
 { 
       int val; 
       if (isempty()) 
            printf("Stack is Empty  \t can't pop"); 
       else 
       { 
               val=s1.a[s1.top]; 
               s1.top--; 
              return val; 
       } 
 } 
 int main()
{
      int i,p,q,r,s,val1,val2,result,re;
      char a[50],ch;
      
      init();
      
      printf("\n Enter Postfix Expresion ::");
      gets(a);
       
       printf("\n Enter values of \n");
       printf("\t P\t="); scanf("%d",&p);
       printf("\t Q\t="); scanf("%d",&q);
       printf("\t R\t="); scanf("%d",&r);
       printf("\t S\t="); scanf("%d",&s);
      
      for(i=0;a[i]!='\0';i++)
        {
               if(isalpha(a[i]))
               {
                        switch(a[i])
                        {
                                 case 'P' : push(p);
                                                    break;
                                 case 'Q' : push(q);
                                                    break;
                                 case 'R' : push(r);
                                                    break;
                                 case 'S' : push(s);
                                                    break;
                        }
               
               }
               else
               {
                        val1=pop();
                        val2=pop();
                        switch(a[i])
                              {
                                        case '+' : result=val2 + val1; break;
                                        case '-' : result=val2 - val1; break;
                                        case '*' : result=val2 * val1; break;
                                        case '/' : result=val2 / val1; break;
                                        case '%' : result=val2 % val1; break;
                                        case '^' : result=val2 ^ val1; break;
                                       
                                        
                              }          push(result);
                        
               }
        }
       
        printf(" \n Result =%d ",pop());
}
