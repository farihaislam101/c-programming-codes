//Write a program that reads 5 number and display sum and average of those numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n");
    scanf ("%d", &n);
    int a[n],sum=0, i;
    printf("Enter 5 numbers");
   // scanf("%d %d %d %d %d", &a[0],&a[1], &a[2], &a[3], &a[4]);
   for(i=0; i<n; i++){
    scanf("%d", &a[i]);
   }
    for(i=0; i<n; i++) {
        sum= sum+a[i];
    }
    printf("The sum is: %d",sum);
    printf("The average is: %.2f",(float)sum/5 );
}
