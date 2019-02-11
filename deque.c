#include <stdlib.h>
#include <stdio.h>
#include "deque.h"
#include "node.h"

void dequeCreate(node **deque)
{
    *deque = (node *) malloc(sizeof(node));
    (*deque)->data = 0;
    (*deque)->next = NULL;
}

void dequePrint(node **head)
{
    node *firstNode = *head;
    if (*head != NULL)
    {
        *head = (*head)->next;

        while (*head != NULL)
        {
            printf("%d ", (*head)->data);
            *head = (*head)->next;
        }

        *head = firstNode;
    }
}

int isEmpty(node **head)
{
    int count = 0;
    node *firstNode = *head;

    if (*head != NULL)
    {
        while (*head != NULL)
        {
            count++;
            *head = (*head)->next;
        }

        *head = firstNode;
    }

    return count == 1;
}

int dequeDestroy(node **head)
{
    node *current = *head;
    node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;

    return 0;
}

int pushEnd(node **deque, int data)
{
    node *newNode = NULL;
    node *lastDeque = NULL;
    node *firstNode = NULL;
    lastDeque = (node *) malloc(sizeof(node));
    newNode = (node *) malloc(sizeof(node));

    newNode->data = data;
    newNode->next = NULL;
    firstNode = *deque;

    while (*deque != NULL)
    {
        lastDeque = *deque;
        *deque = (*deque)->next;
    }

    lastDeque->next = newNode;
    *deque = firstNode;

    return 0;
}

int pushStart(node **deque, int data)
{
    node *newNode = NULL;
    newNode = (node *) malloc(sizeof(node));

    newNode->data = data;
    newNode->next = (*deque)->next;
    (*deque)->next = newNode;

    return 0;
}

int popEnd(node **deque, int *operand)
{
    node *first = *deque;
    node *secondLast = NULL;

    if (isEmpty(deque))
        return -1;

    while ((*deque)->next != NULL)
    {
        *operand = (*deque)->next->data;
        secondLast = *deque;
        *deque = (*deque)->next;
    }

    free(*deque);
    secondLast->next = NULL;
    *deque = first;

    return 0;
}

int popStart(node **deque, int *operand)
{
    node *second = NULL;
    if (isEmpty(deque))
        return -1;

    *operand = (*deque)->next->data;
    second = (*deque)->next;
    (*deque)->next = (*deque)->next->next;
    free(second);

    return 0;
}

int dequeCount(node **deque)
{
    node *first = *deque;
    int count = -1;
    while (*deque != NULL)
    {
        count++;
        *deque = (*deque)->next;
    }

    *deque = first;

    return count;
}