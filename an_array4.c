//Write a program that takes number from the user and displays the maximum
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        printf("Enter Number");
        scanf("%d", &a[i]);
        
    }
    int max=a[0];
    for(i=1; i<n; i++){
        if(max<a[i])
            max=a[i];
        
    }
    printf("Maximum is: %d", max);
}