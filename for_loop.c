//Problem: from a pre set number(limit) print the all odds number till the limit. 

#include<stdio.h>
int main(){
    int n,l;
printf("enter the value of time you want to check");
scanf("%d", &n);
for(int i=1;i<=n;i++){
    printf("enter a number");
    scanf("%d",&l);

for(int j=1;j<=l;j++){
    if(j%2 != 0){
        printf("%d \n",j);
    }
}
        
}
    
    return 0;
}