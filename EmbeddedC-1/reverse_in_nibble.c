//program to reverse particular nibble --- 1100-->0011
#include <stdio.h>
#include <stdint.h>
#include "display_b.h"

int main()
{
uint32_t a,n,p,i,j,mask,x,result;
printf("input number \n:");
scanf("%x",&a);
printf("input number %x \n:",a);
display_bits(a);
printf("input nibble to rverse \n:");
scanf("%d",&n);
p = (4*n)-1;
mask = ~(~0<<4);
x=(a>>(p-4+1))&mask;
display_bits(x);
for(i=0,j=3;i<j;i++,j--)
{
if((x&1<<i)!=(x&1<<j))
{
x=x^1<<i;
x=x^1<<j;
}
}
result = (x<<(p-4+1))|(a&(~(mask<<(p-4+1))));
printf("revresd nibble %x: \n",result);
display_bits(result);
return 0;
}

