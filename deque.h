/*Author: Gintautas Plonis*/
#ifndef ADT_DECK_H
#define ADT_DECK_H

typedef struct Node
{
    int data;
    struct Node *next;
} node;

typedef struct Deque
{
    int size;
    node *next;
} Deque;

/*Creates a new deck*/
void dequeCreate(Deque **deque);

/*Prints a list of deque values separated by single space*/
void dequePrint(Deque **deque);

/*Checks if deque is empty, returns -1 if deque not initialized*/
int isEmpty(Deque **deque);

/*Pushes element onto the end of the deque, returns -1 if deque not initialized*/
int pushEnd(Deque **deque, int data);

/*Pushes element onto the start of the deque, returns -1 if deque not initialized*/
int pushStart(Deque **deque, int data);

/*Pops the last element of the deque and saves value into operand, returns -1 if deque not initialized*/
int popEnd(Deque **deque, int *operand);

/*Pops the first element of the deque and saves value into operand, returns -1 if deque not initialized*/
int popStart(Deque **deque, int *operand);

/*Deletes whole deque, returns -1 if deque not initialized*/
int dequeDestroy(Deque **head);

/*Returns element count, returns -1 if deque not initialized*/
int dequeCount(Deque **deque);

#endif //ADT_DECK_H
