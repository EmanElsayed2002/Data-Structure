# Linked List 
## What is Linked List?
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
## Types of Linked List
1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List

## Singly Linked List
A linked list is said to be singly linked list if there is only one link between any two nodes. A singly linked list can be traversed in only forward direction. A node of singly linked list contains two parts: data and pointer to the next node. The last node points to null. The entry point into a singly linked list is called the head of the list. If the linked list is empty, then the value of the head is null.

## Doubly Linked List
A doubly linked list contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list. Using the previous pointer, it is possible to traverse the list in both forward and backward direction. A node of doubly linked list contains three parts: data, pointer to the next node and pointer to the previous node. The last node points to null. The entry point into a doubly linked list is called the head of the list. If the linked list is empty, then the value of the head is null.


## Circular Linked List
A circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. 
A node of circular linked list contains two parts: data and pointer to the next node. The last node points to the first node as next and the first node points to the last node as previous. It is also called circular list or ring list.


## Advantages over arrays
1. Dynamic size
2. Ease of insertion/deletion

## Disadvantages
1. Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do a binary search with linked lists efficiently with its default implementation. Read about it here.
2. Extra memory space for a pointer is required with each element of the list.
3. Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.







