# Stack

## What is a Stack?
A stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

[![Stack](https://media.geeksforgeeks.org/wp-content/uploads/stack.png)](https://media.geeksforgeeks.org/wp-content/uploads/stack.png)

## Applications of stack
1. Balancing of symbols
2. Infix to Postfix /Prefix conversion
3. Redo-undo features at many places like editors, photoshop.
4. Forward and backward feature in web browsers
5. Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.
6. In Graph Algorithms like Topological Sorting and Strongly Connected Components.
7. In compilers for expression evaluation and syntax analysis.
8. In Operating System for function calls and interrupt handling.

## Advantages
1. Easy to implement. Memory is not a big concern as stack is a small part of memory.
2. It is fast as operations can be done in constant time.
3. Easy to handle stack overflow and stack underflow.

## Operations on Stack
1. push(): Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
2. pop(): Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
3. peek()/top(): Returns top element of stack.
4. isEmpty(): Returns true if stack is empty, else false.


