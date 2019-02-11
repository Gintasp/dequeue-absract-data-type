### Dequeque Abstract Data Type

This project contains ADT of _Dequeue_ data structure. To use this structure, simply upload these files into your project's folder and  `#include "deque.h";` where necessary.

##### How to use
- Code use examples can be found inside `main.c`

##### API:
- `dequeCreate(node **deque)` - initializes dequeue structure
- `pushStart(node **deque, int data)` - pushes data onto the start of dequeue
- `pushEnd(node **deque, int data)` - pushes data onto the end of dequeue
- `popStart(node **deque, int *operand)` - pops the first element of dequeue and saves it's data into operand
- `popEnd(node **dequeue, int *operand)` - pops the last element of dequeue and saves it's data into operand
- `isEmpty(node **deque)` - checks if dequeue is empty (returns 1 if empty, 0 if not empty)
- `dequePrint(node **deque)` - prints elements of the deque
- `dequeCount(node **deque)` - returns the element count of dequeue
- `dequeDestroy(node **deque)` - destroys dequeue and frees the memory