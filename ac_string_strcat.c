// strcat(firstStr, secStr)
//concatenates first string with second string

#include<stdio.h>
#include<string.h>
int main(){
 char firstStr[]="Hello ";
 char secStr[]="world";
 strcat(firstStr,secStr);
 puts(firstStr);
}