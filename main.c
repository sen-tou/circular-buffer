#include <stdio.h>

#include "ring_buffer.h"

int main() {

  Ring_buffer buf = {.buffer = {0}, .head = buf.buffer, .tail = buf.buffer};

  // last iteration should yield false beacause the first value
  // got set and we use non overwrite add
  for (uint32_t i = 0; i <= 30; i++) {
    uint32_t data = (i + 1);
    bool res = Ring_buffer_add(&buf, data);

    printf("[%d] Inserted [%p] was %s \n", i, buf.head, res ? "true" : "false");
  }

  Ring_buffer buf2 = {.buffer = {0}, .head = buf2.buffer, .tail = buf2.buffer};

  for (uint32_t i = 0; i <= 30; i++) {
    uint32_t data = (i + 1);
    bool res = Ring_buffer_add_overwrite(&buf2, data);

    printf("[%d] Inserted [%p] was %s \n", i, buf2.head,
           res ? "true" : "false");
  }
  return 1;
}
