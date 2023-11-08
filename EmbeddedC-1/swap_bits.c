// swap i'th bit with j'th bit in a no.
#include <stdio.h>
#include <sdint.h>
#include "display.h"
#define A 0xFA08
#define B 0x12FF

void swap_bits(uint32_t i,uint32_t j)
{
	int mask =1;
	
