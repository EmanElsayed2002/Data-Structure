# Queue 
## Queue is a linear data structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example of queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

## Applications of queue
1. When a resource is shared among multiple consumers. Examples include CPU scheduling, Disk Scheduling.
2. When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes. Examples include IO Buffers, pipes, file IO, etc.
3. In real life scenario, Call Center phone systems uses Queues to hold people calling them in an order, until a service representative is free.

## Advantages
1. Easy to implement.
2. Easy to add and remove elements.
3. Easy to implement circular queue.

## Operations on Queue
1. enqueue(): Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
2. dequeue(): Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
3. peek()/front(): Returns front element of queue.
4. isEmpty(): Returns true if queue is empty, else false.

## types of queue
1. Linear Queue
2. Circular Queue
3. Priority Queue
4. Double Ended Queue(Deque)



