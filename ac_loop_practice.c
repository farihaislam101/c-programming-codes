#include<stdio.h>
int main(){
    //print the sum of n  natural numbers and reverse them
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int sum=0;
    /*for(int i=1;i<=j;i++){
        sum = sum + i;}
        printf("sum is %d",sum);

    
    for(int i=j;i>=1;i--){
        printf("%d \n",i);
    }*/
for(int i=1, j=n; i<=n && j>=1; i++,j--){
    sum=sum+i;
    printf("%d\n",j);
}
printf("sum is %d \n,sum");
}
