#include "circular.h"

Ring_buffer Ring_buffer_init()
{
  Ring_buffer buf = {.full = false};
  buf.head = &buf.buffer[0];
  buf.tail = buf.head;
  return buf;
}

bool Ring_buffer_is_full(Ring_buffer buf)
{
  if (buf.head == buf.tail && buf.full == true)
  {
    return true;
  }
  return false;
}

bool Ring_buffer_add(Ring_buffer buf, uint8_t data)
{
  return false;
}