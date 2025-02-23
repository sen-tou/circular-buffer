#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 20
#endif

typedef struct
{
  uint8_t *head;
  uint8_t *tail;
  // instead of fixed buffer size malloc could be used to make it more
  // dynamic, for now a buffer on the stack is fine
  uint8_t buffer[BUFFER_SIZE];
  bool full;
} Ring_buffer;

Ring_buffer Ring_buffer_init();

void Ring_buffer_reset(Ring_buffer buf);

bool Ring_buffer_add(Ring_buffer buf, uint8_t data);

bool Ring_buffer_is_full(Ring_buffer buf);
