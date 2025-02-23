#include <stdio.h>

#include "circular.h"

int main()
{
    Ring_buffer buf = Ring_buffer_init();

    Ring_buffer_add(buf, 8);

    return 1;
}
