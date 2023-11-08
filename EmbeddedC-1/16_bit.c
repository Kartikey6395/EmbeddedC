//operation on different size bits
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint16_t a=301;
uint32_t b=557;

uint32_t res32 = a&b;
uint16_t res16 = a&b;
display_bits(a);
display_bits(b);
display_bits(res32);
display_bits(res16);
return 0;
}

