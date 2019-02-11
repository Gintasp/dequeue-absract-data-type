#ifndef ADT_DECK_H
#define ADT_DECK_H

#include "node.h"

/*Creates a new deck*/
void dequeCreate(node **deque);

/*Prints a list of deque values separated by single space*/
void dequePrint(node **head);

/*Checks if deque is empty*/
int isEmpty(node **head);

/*Pushes element onto the end of the deque*/
int pushEnd(node **deque, int data);

/*Pushes element onto the start of the deque*/
int pushStart(node **deque, int data);

/*Pops the last element of the deque and saves value into operand*/
int popEnd(node **deque, int *operand);

/*Pops the first element of the deque and saves valye into operand*/
int popStart(node **deque, int *operand);

/*Deletes whole deque*/
int dequeDestroy(node **head);

/*Returns element count*/
int dequeCount(node **deque);

#endif //ADT_DECK_H
