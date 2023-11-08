#include<stdio.h>
#include<stdlib.h>

int check_set_bit(int NUM , int bit)
{
	int mask,r;
	mask = 1<<(bit-1);
	if((NUM&mask)!=0)
		return NUM;
	else
		return (NUM&mask);
}

int main()
{
	int n,b,result;
	scanf("%d",&n);
	scanf("%d",&b);
	result=check_set_bit(n,b);
	printf("%x \n",result);
	return 0;
}

