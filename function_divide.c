#include<stdio.h>

int divide(int a, int b);

int main(){
    printf("first number: ");
    int a, b;
    scanf("%d", &a);
    printf("second mumber: ");
    scanf("%d", &b);
    int d= divide(a, b);
    printf("%d\n", d);
}
int divide(int anika, int jarin){
    return anika/jarin;
}