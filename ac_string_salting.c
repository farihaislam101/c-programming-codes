// Find the salted form of a password entered by user
//if the salt is "123" & added at the end
#include<stdio.h>
#include<string.h>
void salting(char passward[]){
    char salt[]= "123";
    char newpass[200];
    strcpy(newpass, passward);
    strcat(newpass,salt);
    puts(newpass);
}

int main(){
    char passward[100];
    scanf("%s", &passward);
    salting(passward);
}