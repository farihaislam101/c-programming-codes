// strcpy(newStr, oldStr)= copies value of old string to new string
#include<stdio.h>
#include<string.h>
 
 int main(){
    char oldStr[]= "anika";
    char newStr[]= "jarin";
    strcpy(oldStr, newStr);
    puts(oldStr);

 }