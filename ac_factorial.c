//print the factorial of a number n
#include<stdio.h>
int main(){
    int n;
printf("Enter a number");
scanf("%d",&n);
 int fact =1;
 for(int i=n;i>=1;i--){
    fact = fact*i;
 }
 printf("final factorial is %d", fact);
}