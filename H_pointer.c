#include<stdio.h>

int main (){
   int i = 44;
   int *j = &i;// j will store the address of i
   printf("the value of i is: %d\n",i);
   printf("the value of i is %d\n",*j);
}