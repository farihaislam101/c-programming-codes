//Write a function named slice, which takes a string &returns a sliced string from index n to m
#include<stdio.h>

void slice(char str[], int n, int m){
    char newStr[100];
    int i, j;
    for(i=n,j=0; i<m; i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);

}
int main(){
    char str[]="HelloWorld";
    slice(str,3,6);
}
