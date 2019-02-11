#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

/*This file contains example use of deque ADT*/

int main()
{
    node *deque = NULL;
    int operandOne = 0;
    int operandTwo = 0;

    dequeCreate(&deque);

    pushEnd(&deque, 1);
    pushEnd(&deque, 2);

    pushStart(&deque, -1);
    pushStart(&deque, -2);

    printf("The elements of deque are: ");
    dequePrint(&deque);

    popEnd(&deque, &operandOne);

    printf("\noperandOne after popEnd(&deque, &operandOne): %d\n", operandOne);
    printf("Deque now is: ");
    dequePrint(&deque);

    popStart(&deque, &operandTwo);

    printf("\noperandTwo after popStart(&deque, &operandTwo): %d\n", operandTwo);
    printf("Deque now is: ");
    dequePrint(&deque);

    printf("\nDeque element count: %d\n", dequeCount(&deque));
    printf("isEmpty(&deque): %d\n\n", isEmpty(&deque));

    dequeDestroy(&deque);

    return 0;
}