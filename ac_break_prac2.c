# include<stdio.h>
//keep taking numbers as input from user untill user enters a number which is a multiple of 7
int main(){
    do{
        int n;
        printf("Enter a number");
        scanf("%d",&n);
        if(n%7 == 0){
            break;
        }
    }
    while(1);
    printf("The number is divided by 7");
}