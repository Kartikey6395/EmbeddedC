//position of all set bits
#include <stdio.h>

#define NUM 10
 int main()
 {
 int mask =1,pos=1;
 int i,x;
 for(i=1;i<=32;i++){
 
 if((NUM&mask)!=0){
 printf("%d",i);
 mask<<=i;
 }
 mask<<=1;
 }
 return 0;
 }
