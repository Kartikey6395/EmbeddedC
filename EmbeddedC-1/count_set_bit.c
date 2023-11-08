#include <stdio.h>
int count_set_bit(int);
 
 int main()
 {
 int a;
 a=count_set_bit(10);
 printf("%d",a);
 return 0;
 }
 
 int count_set_bit(int NUM)
{
int count =0;
 while(NUM>0)
 {
 NUM&=NUM-1;
 count++;
 }
 return count;
 }
