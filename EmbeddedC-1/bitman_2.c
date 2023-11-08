//prog to mainpulate n bits of y by replacing it by n bits of x rightside bits from position p
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint32_t x,y,p,n,mask,result_right,result_left;
printf("enter num x ");
scanf("%x",&x);
display_bits(x);
printf("enter num y ");
scanf("%x",&y);
display_bits(y);
printf("enter position p ");
scanf("%d",&p);
printf("enter digits n ");
scanf("%d",&n);

mask =~(~0<<n);

result_right = (x&(mask<<(p-n+1)))|(y&(~(mask<<(p-n+1))));
printf("result_right is : ");
display_bits(result_right);
result_left = (x&(mask<<p))|(y&(~(mask<<p)));
printf("result_left is : ");
display_bits(result_left);

return 0;
}


