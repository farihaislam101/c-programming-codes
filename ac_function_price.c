#include<stdio.h>

void print_price(float n){
    printf("%f",( n*.18) +n);
}

    int main(){
        float price;
        printf("Enter the price");
        scanf("%f", &price);
        print_price(price);

    }