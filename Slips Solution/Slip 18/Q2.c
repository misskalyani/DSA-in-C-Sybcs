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
NODE *multiplyPolynomials(NODE *poly1, NODE *poly2)
{
    NODE *result = NULL;
    NODE *temp1, *temp2;

    for (temp1 = poly1; temp1 != NULL; temp1 = temp1->next)
    {
        for (temp2 = poly2; temp2 != NULL; temp2 = temp2->next)
        {
            int coef = temp1->coef * temp2->coef;
            int expo = temp1->expo + temp2->expo;

            result = addNode(result, coef, expo);
        }
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

    resultMultiply = multiplyPolynomials(list1, list2);
    printf("\n\nMultiplication Result: ");
    disp(resultMultiply);
}
