#include<stdio.h>
int main(){
    int num[]={1, 23, 43, 56, 45,35};
    int n, pos,i;
     pos= -1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for( i=0; i<=6; i++){
        if(n==num[i]){
           pos= i+1; 
            break;
        }
    }
    if(pos==-1)
    printf("Not found");
    else
    printf("The position of the number is: %d\n", pos);
        
}