#include<stdio.h>
int arry[8]={0,1,2,3,4,5,6,7};
int *array()
{
arry[5]=89;
return arry;
}
int main()
{
int *arr=array();
for(int i=0;i<8;i++)
printf("%d",arr[i]);
return 0;
}
