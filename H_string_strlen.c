//Write your own version of strlen function from <string.h>

#include<stdio.h>

 int strlen(char arr[]){
 int count =0, i;
 for(i=0; arr[i]!='\0'; i++){
    count++;
 }
 return count-1;
}
int main(){
    char name[100];
    printf("Enter your name");
    fgets(name, 100, stdin);
printf("length is : %d", strlen(name));
}