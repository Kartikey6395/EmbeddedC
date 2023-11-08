#include <stdio.h>

void display_bits(int NUM)
{
//int inbit_ = sizeof(NUM) *8 ;
	
	int i,bit,mask;

	for(i=31; i>=0; i--)
		{
			/*
			bit=(NUM>>i)&1;
			printf("%d",bit);A
			*/
			
			mask=1<<i;
			bit = (NUM & mask)!=0;
			if((i+1)%8==0)
			printf("\t");
			
			printf("%d", bit);
			
		}
	printf("\n");
	
	}
