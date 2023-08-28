# include<stdio.h>
//keep taking numbers as input from user untill user enters an odd number
int main(){
int n;
do{
    printf("Enter a number:");
    scanf("%d",&n);
    
    if(n%2 != 0){
        break;
    }
}
while(1);
printf("THANK YOU");

}


