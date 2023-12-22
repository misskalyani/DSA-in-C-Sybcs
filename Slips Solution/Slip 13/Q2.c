#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define memory (NODE *)malloc(sizeof(NODE));

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *create(NODE *head)
{
    int n, i;
    NODE *newnode, *temp;

    printf("\n Enter Limit :: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = memory;
        printf("Enter Value :: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

void display(NODE *head)
{
    NODE *temp;

    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->data);
    }
}
NODE *bubble(NODE *head)
{
    int done;
    NODE *temp;
    NODE *temp2 = NULL;

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

int main()
{
    NODE *head = NULL;
    head = create(head);
    printf("\nLinked list before sorting:\n");
    display(head);
    head = bubble(head);
    printf("\n\nLinked list after sorting:\n");
    display(head);
    printf("\n");

    return 0;
}
