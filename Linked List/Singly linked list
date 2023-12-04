#include<stdio.h>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
typedef struct node
{
	int data;
	struct node*next;
}node;
node *create(node*head)
{
	struct node*newnode,*temp;
	int i, n,num;
	printf("enter limit:");
	scanf("%d",&n);
   for(i=0;i<n;i++)
	{
	newnode=memory;
	printf("enter value::");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
	return head;
}
node *disp(node*head)
{
	node*temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
node *delbyval(node*head,int num)
{
	node*temp,*temp1;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
		{
			break;
		}
	}
	for(temp1=head;temp1->next!=temp;temp1=temp1->next);
	temp1->next=temp->next;
	free(temp);
	return head;
}
node *bubble(node *head)
{
    int done;
    node *temp;
    node *temp2 = NULL;

    if (head == NULL)
        return head;

    do
    {
        done = 0;
        temp = head;

        while (temp->next != temp2)
        {
            if (temp->data > temp->next->data)
            {
                int temp_data = temp->data;
                temp->data = temp->next->data;
                temp->next->data = temp_data;
                done = 1;
            }
            temp = temp->next;
        }
        temp2 = temp;
    } while (done);
   return head;
}
 node*reverse(node *head)
  {
    node *temp = NULL;
    node *current = head;
    node *next = NULL;

    while (current != NULL) 
	{
        next = current->next;
        current->next = temp;
        temp = current;
        current = next;
    }

    head =temp ;
    return head;
}
node *insertbegin(node*head,int num)
{
	node *newnode;
	newnode=memory;
	newnode->data=num;
	newnode->next=head;
	head=newnode;
	return head;
}
node *insertend(node*head,int num)
{
	node *newnode,*temp;
	newnode=memory;
	newnode->data=num;
	newnode->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return head;
}
node *insertmid(node*head,int num,int pos)
{
	node *newnode,*temp;
	int i;
	newnode=memory;
	newnode->data=num;
	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
node *delbegin(node *head)
{
	node *temp;
	temp=head;
	head=head->next;
	free(temp);
	return head;
}
node *delend(node *head)
{
	node *temp,*temp1;
	for(temp=head;temp->next->next!=NULL;temp=temp->next);
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	return head;
}
node *delmid(node *head,int pos)
{
	node *temp,*temp1;
	int i;
	for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
	return head;
}
node *insertcommon(node *head,int num,int pos)
{
	node *newnode,*temp;
	int i;
	newnode=memory;
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	newnode->next=temp->next;
	    temp->next=newnode;	
	}
	return head;
}
node *delcommon(node *head,int pos)
{
	node *temp1,*temp;
	int i;
	if(pos==1)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	temp1=temp->next;
	    temp->next=temp1->next;	
	    free(temp1);
	}
	return head;
}
node *search(node *head,int num)
{
	node *temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
		{
			return temp;
		}
	}
   return NULL;
}
int findmax(node *head)
{
	node *temp;
	int max=head->data;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}
	}
	return max;
}
node *sort(node *head)
{
	node *i,*j;
	int t;
	for(i=head;i!=NULL;i=i->next)
	{
		for(j=head;j!=NULL;j=j->next)
		{
	    	if(i->data<j->data)
	       {
		   
			 t=i->data;
	    	 i->data=j->data;
	         j->data=t;
     	   }
   	    }
    }
    return head;
}
int main()
{
	node *head=NULL;
	int ch,num,pos;
	do
	{
	
		printf("\n1-create\n2-disp\n3-delbyval\n4-bubble\n5-reverse\n6-insert begining\n7-insert end\n8-insert mid");
		printf("\n9-del begining\n10-del end\n11-del mid\n12-insert common\n13-insert del\n14-search\n15-find max\n16-sort");
	    
		
		printf("\n\nenter choice::");
		scanf("%d",&ch);
		switch(ch)
		{
		  	case 1:head=create(head);
			        break;
		  	case 2:disp(head);
			        break; 
		  	case 3:printf("enter num::");
			        scanf("%d",&num);
			        head=delbyval(head,num);
			        disp(head);
				      break;	         
		   case 4:head=bubble(head);
	            disp(head);
				      break;
	     case 5:head=reverse(head);
	            disp(head);
				      break;
		   case 6:printf("enter num::");
			        scanf("%d",&num);
		          head=insertbegin(head,num);
	            disp(head);
				      break;
	    case 7:printf("enter num::");
			       scanf("%d",&num);
             head=insertend(head,num);
	           disp(head);
				     break;       
		  case 8:printf("enter num::");
			       scanf("%d",&num);
		         printf("enter pos::");
			       scanf("%d",&pos);
				     head=insertmid(head,num,pos);
	           disp(head);
				     break;
		 case 9:head=delbegin(head);
	          disp(head);
				    break;
	  case 10:head=delend(head);
	          disp(head);
				    break;
		case 11:printf("enter pos::");
			      scanf("%d",&pos);
			      head=delmid(head,pos);
	          disp(head);
				    break;		          
	  case 12:printf("enter num::");
			      scanf("%d",&num);
			      printf("enter pos::");
			      scanf("%d",&pos);
			      head=insertcommon(head,num,pos);
			      disp(head); 
					  break;	         
	  case 13:printf("enter pos::");
			      scanf("%d",&pos);
			      head=delcommon(head,pos);
			      disp(head);
				    break;
		case 14:printf("enter num::");
			      scanf("%d",&num);
			      if(search(head,num)==NULL)
			        {
			        	printf("not found");
					    }
					 else
					 printf("found");
			     break;	 
		case 15:printf("maximum no=%d",findmax(head));
		        disp(head);
				    break;
		case 16:head=sort(head);	                
            disp(head);
				    break;				        	         
	}
		
	}while(ch<20);
}
