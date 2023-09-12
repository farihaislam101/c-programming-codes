#include<stdio.h>
int main(){
    int n;
    int pos = -1;
    for(int i=0; i<10; i++){
    printf("Enter a number:");
    scanf("%d", &n);
    int a[]={1,2,3,4,5,43,6,55,64,77,54,23,23};
    for(int i=0; i<13; i++){
        if(n==i){
           pos=i+1;
        break;  
        }
    }
    
    if(pos==-1)
    printf("The number is not in the array!");
    else
    printf("The position of the number is %d\n ", pos);
    }
}