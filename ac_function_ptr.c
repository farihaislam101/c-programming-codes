#include<stdio.h>
//Call by value / call by referance

//void square(int n){

  //  n=n*n;
    //printf("square = %d\n", n);
//}
void _square(int* n){
    *n = (*n)*(*n);
    printf("Square: %d\n", *n);
}
int main(){
    int number = 10;
   // square(number);
    //printf("the number is : %d\n", number);

    _square(&number);
    printf("the number is : %d\n", number);
}
