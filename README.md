# Circular Buffer in C

What is a circular buffer? It is a fix size array that is read with FIFO.
The data is stored circular, meaning the storage gets reused once the buffer
overflows.

There are also refered to as circular queues, cyclic buffers or ring buffers.

I based my reading mostly on this [blog post](https://www.baeldung.com/cs/circular-buffer).

# Implementation

- A pointer where the next empty element is and where elements will be inserted
in is called the **head**
- A pointer to the **oldest** data in the buffer is the **tail**
- If the head and tail point to the same location the buffer is full
