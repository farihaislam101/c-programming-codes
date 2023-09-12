//Ask the user to enter their firstName & print it back to them
//Also try this with their full name
#include <stdio.h>
int main(){
    char fullName[100];
    printf("Enter your full name: ");
    //scanf cannot inut multi-word strings wirh spaces
    //that's why gets()&puts( are used)
    //but getss()is dangerous to use
    // fgets(str,n,stdin)
   // gets(fullName);

    fgets(fullName, 100, stdin);
    puts(fullName);

    
   // printf("your full name is %s", fullName);
}