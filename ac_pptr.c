//print the value of i from its pointer to pointer
#include<stdio.h>

int main(){
   int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("i= %d\n", **pptr);
}