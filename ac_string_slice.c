//write a function named slice, which takes a string & returns a sliced string from index n to m
#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m){// n & m are valid value
    char newStr[100];
    int j=0;
    int i;
    for(i=n; i<=m; i++,j++){
       newStr[j]= str[i]; 
       printf(newStr);
    }
    newStr[j]='\0';
    printf("%s",newStr);
}
int main(){

    char str[]= "HelloWorld";
    slice(str, 3, 6);
}