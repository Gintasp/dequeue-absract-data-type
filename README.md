### Dequeque Abstract Data Type

This project contains ADT of _Dequeue_ data structure. To use this structure, simply upload these files into your project's folder and  `#include "deque.h";` where necessary.

##### How to use
- Code use examples can be found inside `main.c`

##### API:
- `dequeCreate(Deque **deque)` - initializes dequeue structure
- `pushStart(Deque **deque, int data)` - pushes data onto the start of dequeue
- `pushEnd(Deque **deque, int data)` - pushes data onto the end of dequeue
- `popStart(Deque **deque, int *operand)` - pops the first element of dequeue and saves it's data into operand
- `popEnd(Deque **dequeue, int *operand)` - pops the last element of dequeue and saves it's data into operand
- `isEmpty(Deque **deque)` - checks if dequeue is empty (returns 1 if empty, 0 if not empty)
- `dequePrint(Deque **deque)` - prints elements of the deque
- `dequeCount(Deque **deque)` - returns the element count of dequeue
- `dequeDestroy(Deque **deque)` - destroys dequeue and frees the memory