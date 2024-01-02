#include<stdio.h> 
#include<ctype.h> 
#include<string.h> 
int stack[20]; 
int top = -1; 
void push(int x) 
{ 
 	stack[++top] = x; 
} 
int pop() 
{ 
 	return stack[top--]; 
} 
int main() 
{ 
 	char exp[20], revexp[20];  
 	char *temp=NULL; 
 	int n1, n2, n3, num; 
 	printf("Enter prefix expression without space :: "); 
 	scanf("%s",exp); 
	strcpy(revexp,strrev(exp)); 
 	temp=revexp; 
 	while(*temp != '\0') 
 	{ 
 		if(isdigit(*temp)) 
 		{ 
 			num = *temp - 48;
 			push(num); 
 		} 
 		else 
 		{ 
 			n1 = pop(); 
 			n2 = pop(); 
 			switch(*temp) 
 			{ 
 				case '+': 
 						{ 
 							n3 = n2 + n1; 
 							break; 
 						} 
 				case '-': 
 						{ 
 							n3 = n2 - n1; 
 							break; 
 						} 
 				case '*': 
 						{ 
 							n3 = n2 * n1; 
 							break; 
 						} 
 				case '/': 
 						{ 
 							n3 = n2 / n1; 
 							break; 
 						} 
 			} 
 			push(n3); 
 		} 
 		temp++; 
 	} 
 	printf("\nThe result of prefix expression %s = %d\n\n",exp,pop()); 
 	return 0; 
 }
