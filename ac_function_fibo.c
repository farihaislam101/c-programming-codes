//Write a function t print n terms of the fibonacci sequence
#include<stdio.h>
int fibo(int n){
    if(n==0 ||n==1){
        if(n==0){
    
        return 0;
        }
        if(n==1);{
            return 1;
        }
    }
    else 
        return(n-1)+(n-2);
}
    int main(){
        int result = fibo(6);
        printf("%d /n", result);
    }