/*strcmp(firstStr, secStr)
 compares two strings & returns a value
 0 -> string equal
 positive-> first > second(ASCII)
 negetive -> first < second(ASCII)
 */
#include<stdio.h>
#include<string.h>
int main (){
    char firstStr[]="Apple";
    char secStr[]="Banana";
    printf("%d", strcmp(firstStr,secStr));
}