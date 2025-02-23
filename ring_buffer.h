#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifndef RING_BUFFER_SIZE
#define RING_BUFFER_SIZE 20
#endif

typedef struct {
  // instead of fixed buffer size malloc could be used to make it more
  // dynamic, for now a buffer on the stack is fine
  uint32_t buffer[RING_BUFFER_SIZE];
  uint32_t *head;
  uint32_t *tail;
  size_t count;
} Ring_buffer;

void Ring_buffer_reset(Ring_buffer *buf);

bool Ring_buffer_add(Ring_buffer *buf, uint32_t data);
bool Ring_buffer_add_overwrite(Ring_buffer *buf, uint32_t data);

bool Ring_buffer_is_full(Ring_buffer *buf);
