#include <stdint.h>
#include <stddef.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 20
#endif

typedef struct
{
    size_t *head;
    size_t *tail;
    // instead of fixed buffer size malloc could be used to make it more
    // dynamic, for now a buffer on the stack is fine
    uint8_t buffer[BUFFER_SIZE];
    bool full;
} Ring_buffer;
typedef Ring_buffer *R_ptr;

R_ptr Ring_buffer_init();

void Ring_buffer_reset(R_ptr buf);

bool Ring_buffer_add(R_ptr buf, uint8_t data);
