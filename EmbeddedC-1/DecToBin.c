//decimal to binary conversion
void DecToBin(int);
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void DecToBin(int num)
	{int i=0,j,bin[32],arr[32];
		while(num>0)
		{
		bin[i]=num&1;
		num>>=1;
		i++;
		}
		
		for(j=i-1;j>=0;j--)
		{
		//arr[j]= bin[i];
		printf("%d",bin[j]);
		
		}
	}

int main()
	{
	//printf("new");
	int n = 3;
	
	DecToBin(n);
	//printf("....%d.....",res);
	return 0;
	}

	
