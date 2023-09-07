//Write a program to store the first n fibonacci number
/*0 1 1 2 3 5 8 13 21
first = 0
second = 1
fibo = first + seecond
first= second
second =fibo*/
#include<stdio.h>
int main(){
    int a[30], n;
    printf("How many fibonacci numbers");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2; i<n; i++){
        a[i]=a[i-1]+a[i-2];
    }

    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}