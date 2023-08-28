//use library function to calculate the square of a number given by the user
#include<stdio.h>
#include<math.h>

void printsqr(float n){
    printf("%f", pow(n, 2));
}

    int main(){
        float a;
        printf("Enter the value of a");
        scanf("%f",&a);
        printsqr(a);
    }