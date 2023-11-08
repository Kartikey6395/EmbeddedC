#include <stdio.h>
#include "display_b.h"
#define BIT 6
#define NUM 42

int main()
{
int x;
int mask = 1<<BIT-1;
display_bits(NUM);

display_bits(~mask);
x=NUM&(~mask);
display_bits(x);
return 0;
}


