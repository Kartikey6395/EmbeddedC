//atoi implementation string to decimal 
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int myAtoi(const char *nstr)
{	//char *ptr=nstr;
	int res=0,sign=1;
	while(*nstr!='\0')
	{
		if(*nstr=='+' || *nstr=='-')
		{
		sign = (*nstr == '+')?1:-1;
		nstr++;
		}
		while(*nstr>='0' && *nstr<='9')
		{
		res= res*10 + (*nstr - '0');
		nstr++;
		}
		}
		return sign*res;
	
}	
int main()
{
char str[20];
int result=0;
scanf("%s",str);
result = myAtoi(str);
printf("result =  %d ",result);
return 0;
}


