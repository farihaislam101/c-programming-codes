//adding two numbers using pointer
#include<stdio.h>
int main(){
    int x=10,y=20;
    int *ptr,*pttr;
    ptr=&x;
    pttr=&y;
    int sum = *ptr+*pttr;
    printf("the sum is : %d", sum);

}