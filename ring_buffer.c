#include "ring_buffer.h"

bool Ring_buffer_add(Ring_buffer *buf, uint32_t data) {
  if (buf->count == RING_BUFFER_SIZE) {
    return false;
  }

  *(buf->head) = data;

  // next
  buf->head++;
  if (buf->head >= buf->buffer + RING_BUFFER_SIZE) {
    // Wrap-around
    buf->head = buf->buffer;
  }

  buf->count++;
  return true;
}

bool Ring_buffer_add_overwrite(Ring_buffer *buf, uint32_t data) {
  *(buf->head) = data;

  // next
  buf->head++;
  if (buf->head >= buf->buffer + RING_BUFFER_SIZE) {
    // Wrap-around
    buf->head = buf->buffer;
  }

  if (buf->count == RING_BUFFER_SIZE) {
    // move the tail forward from this point so that the head
    // chases the tail
    // count does not need to go up because it could reach
    // the data type limit with increasing operations
    buf->tail++;
    if (buf->tail >= buf->buffer + RING_BUFFER_SIZE) {
      buf->tail = buf->buffer; // Wrap-around
    }
  } else {
    buf->count++;
  }

  return true;
}