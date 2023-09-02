//Write a program to change the value of a variable to ten times of its current value.
//Write a function and pass the value by referance
#include<stdio.h>
void multiplication(int *sum){
    *sum= *sum + 10;

    printf("%d\n",*sum);

}
int main(){
    int b=5;

    multiplication(&b);
    printf("%d\n",b);
}