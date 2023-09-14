//Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal
#include<stdio.h>
int main(){
    char str1[20];
    char str2[20];
    char c;
    int i=0;
    printf("Enter the value of first string: ");
    scanf("%s",str1);
    printf("Enter the  value of second string: ");

    while(c != '\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i]='\0';
    printf("\n");
    printf("The name of str2 is: %s", str2);
    printf("The name of str1 is : %s",str1);
}