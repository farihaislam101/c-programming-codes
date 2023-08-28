//write a function that prints Hello if the user is English &Bonjour if the user is french
#include<stdio.h>
void hello(){
    printf("hello");        
}
void bonjour(){
    printf("Bonjour");
}

int main(){
    printf("enter f for french & e for english");
    char ch;
    scanf("%c", &ch);
    if(ch=='e'){
        hello();

    }
        else bonjour();
}
