//check if a given character is present in a string or not
#include<stdio.h>

void check(char str[]){
    int count =0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='w'){
            // printf("%d",count);
           // count++;
            //  printf("%d",count);
           //if(count==2){
              //  break;
            
            printf("yes");
            return;
            }       
        
       } 
printf("no");
    }

    int main(){
    char str[]="bee";
    check(str);
}