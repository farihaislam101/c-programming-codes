#include<stdio.h>
int test_function(int x)
{
    int y=x; //40
    x = 2*y; // 80
    return(x * y); //3200
}

int main(){
    int x=10, y=20, z, kicuEkta=40;
    z= test_function(kicuEkta);
    printf("%d, %d, %d \n", x, y,z);
}