// clear the rightmost set bit of a number
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

#define a 0xffab0710

int main()
{
uint32_t n;
printf("input bits :");
display_bits(a);
n=a&(a-1);
printf("output after clear rightmost set bit : ");
display_bits(n);
return 0;
}
	
