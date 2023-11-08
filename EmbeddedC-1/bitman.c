//prog to insert a number x leftside into number y from position p using bitwise

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint32_t x,y,a,mask,p,i=0,result;
printf("enter number x");
scanf("%x",&x);
display_bits(x);
printf("enter number y");
scanf("%x",&y);
display_bits(y);
printf("enter position p");
scanf("%d",&p);
a=x;
while(a>>=1)
{
i++;
}
mask = ~(~0<<i);
result = (x<<p)|(y&(~(mask<<p)));
printf("result y : ");
display_bits(result);

return 0;
}

