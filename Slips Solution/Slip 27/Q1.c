#include <stdio.h>
#include <stdlib.h>

#define Memory (NODE *)malloc(sizeof(NODE))

typedef struct node
{
    int coef;
    int expo;
    struct node *next;
} NODE;

NODE *create(NODE *list)
{
    NODE *newnode, *temp;
    int n, i;
    printf("Enter Limit  ::  ");
    scanf("%d", &n);
    for (i = n - 1; i >= 0; i--)
    {
        newnode = Memory;
        printf("ENTER COEF  ::  ");
        scanf("%d", &newnode->coef);
        newnode->expo = i;
        newnode->next = NULL;

        if (list == NULL)
        {
            list = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return list;
}

void disp(NODE *list)
{
    NODE *temp;
    for (temp = list; temp != NULL; temp = temp->next)
    {
        printf("%dx^%d +", temp->coef, temp->expo);
    }
    printf("\b");
}

NODE *addNode(NODE *result, int coef, int expo)
{
    NODE *newNode = Memory;
    newNode->coef = coef;
    newNode->expo = expo;
    newNode->next = NULL;

    if (result == NULL)
    {
        result = newNode;
    }
    else
    {
        NODE *temp = result;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return result;
}

NODE *addPolynomials(NODE *poly1, NODE *poly2)
{
    NODE *result = NULL;
    NODE *temp, *prev, *newNode;

    temp = poly1;
    prev = NULL;
    while (temp != NULL)
    {
        newNode = Memory;
        newNode->coef = temp->coef;
        newNode->expo = temp->expo;
        newNode->next = NULL;

        if (result == NULL)
        {
            result = newNode;
        }
        else
        {
            prev->next = newNode;
        }
        prev = newNode;
        temp = temp->next;
    }

    temp = poly2;
    while (temp != NULL)
    {
        NODE *temp3 = result; 
        prev = NULL;
        while (temp3 != NULL && temp->expo < temp3->expo)
        {
            prev = temp3;
            temp3 = temp3->next;
        }
        if (temp3 != NULL && temp->expo == temp3->expo)
        {
            temp3->coef += temp->coef;
        }
        else
        {
            newNode = Memory;
            newNode->coef = temp->coef;
            newNode->expo = temp->expo;
            newNode->next = temp3;

            if (prev == NULL)
            {
                result = newNode;
            }
            else
            {
                prev->next = newNode;
            }
        }
        temp = temp->next;
    }
    return result;
}
int main()
{
    NODE *list1 = NULL, *list2 = NULL, *resultAdd, *resultMultiply;
    list1 = create(list1);
    list2 = create(list2);

    printf("\nPolynomial 1: ");
    disp(list1);
    printf("\nPolynomial 2: ");
    disp(list2);

    resultAdd = addPolynomials(list1, list2);
    printf("\n\nAddition Result: ");
    disp(resultAdd);

}
