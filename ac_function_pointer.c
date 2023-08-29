#include<stdio.h>
//Write a function to calculate the sum , product &average of two numbers. Print that average in the main function
void calculation(int a, int b,int *sum, int *prod, int *avg){
    *sum= a+b;
    *prod= a*b;
    *avg= (a+b)/2;
}
int main (){
    int a =3;
    int b=5;
    int sum, prod, avg;
    calculation(a ,b, &sum, &prod, &avg);
    printf("sum= %d\n, prod= %d, avg= %d", sum, prod, avg );
}