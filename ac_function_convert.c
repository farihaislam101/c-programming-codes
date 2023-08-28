//Write a function to convert celsious to farenheit
#include<stdio.h>

float convertTemp(float celsius){
    return (celsius * (9/5))+ 32;
    
}
    int main(){
      float faren =  convertTemp(0);
        printf("Temperature in farenheit is: %.2f \n",faren);
    }