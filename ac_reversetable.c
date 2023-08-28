//print reverse of the table for  number n
#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d \n",n*i);

    }
}