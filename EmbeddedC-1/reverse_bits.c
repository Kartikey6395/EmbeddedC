//program to reverse bits
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint32_t num,i,j;
printf("inpuut 32 bit number :");
scanf("%x",&num);
printf("%x \n",num);
display_bits(num);
for(i=0,j=31;i<j;i++,j--)
{
if((num&(1<<i)) != (num&(1<<j)))
{

num = num^(1<<i);
num = num^(1<<j);
}
}

printf("reverse bits : %x \n",num);
display_bits(num);
return 0;
}
