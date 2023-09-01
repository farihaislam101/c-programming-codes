//Write a program to change the value of a variable to ten times of its current value.
//Write a function and pass the value by referance
#include<stdio.h>
void multiplication(int a, int *product){
    *product = a*10;
    printf("%d\n",*product);

}
int main(){
    int b=5;
int product;
    multiplication(b , &product);
    printf("%d\n",b);
}