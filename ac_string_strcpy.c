// strcpy(newStr, oldStr)= copies value of old string to new string
#include<stdio.h>
#include<string.h>
 
 int main(){
    char oldStr[]= "oldstr";
    char newStr[]= "newstr";
    strcpy(newStr, oldStr);
    puts(newStr);

 }