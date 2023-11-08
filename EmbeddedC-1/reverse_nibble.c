//code to reverse/swap the nibble requested 0x1214 --> 0x1241 
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint32_t mask,a,result;
a = 0x1214;
printf("input number :");
display_bits(a);
mask =~(~0<<4);
result = ((a&mask)<<4|(a&(mask<<4))>>4)|(a&(~0<<8));
printf("swap nibble \n %x :",result);
display_bits(result);
return 0;
}
