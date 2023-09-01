//Write a program to print the address af a variable. use this address to get the value of this variable
#include<stdio.h>

int main(){
    int i=6;
    int *ptr=&i;
      
    printf("The  address of i is: %u\n",ptr);
    printf("the value of variable is %d\n", *ptr);
}