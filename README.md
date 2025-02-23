# Circular Buffer in C

What is a circular buffer? It is a fix size array that is read with FIFO.
The data is stored circular, meaning the storage gets reused once the buffer
overflows.

There are also refered to as circular queues, cyclic buffers or ring buffers.

I based my reading mostly on this [blog post](https://www.baeldung.com/cs/circular-buffer).

## Implementation

- A pointer where the next empty element is and where elements will be inserted
in is called the **head**
- A pointer to the **oldest** data in the buffer is the **tail**
- A counter **count** that counts the elements up until the limit
- Once the count reaches the limit the head needs to weap arounf and then
it can either:
  - Stop inserting
  - Ovewriting the latest data, from this point the tail needs to move as well
  so that it points to the oldest data as described above
