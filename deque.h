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

/*Checks if deque is empty*/
int isEmpty(Deque **deque);

/*Pushes element onto the end of the deque*/
int pushEnd(Deque **deque, int data);

/*Pushes element onto the start of the deque*/
int pushStart(Deque **deque, int data);

/*Pops the last element of the deque and saves value into operand*/
int popEnd(Deque **deque, int *operand);

/*Pops the first element of the deque and saves valye into operand*/
int popStart(Deque **deque, int *operand);

/*Deletes whole deque*/
int dequeDestroy(Deque **head);

/*Returns element count*/
int dequeCount(Deque **deque);

#endif //ADT_DECK_H
