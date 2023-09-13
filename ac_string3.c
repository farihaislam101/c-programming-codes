//Make a program that inputs user's name & print its length
#include<stdio.h>

 int countLength(char arr[]){
 int count =0, i;
 for(i=0; arr[i]!='\0'; i++){
    count++;
 }
 return count-1;
}
int main(){
    char name[100];
    fgets(name, 100, stdin);
printf("length is : %d", countLength(name));
}