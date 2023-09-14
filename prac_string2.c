# include <stdio.h>
int main(){
    char fullName[100];
    printf("Enter your name");
    fgets(fullName, 100, stdin);
    puts(fullName);
}