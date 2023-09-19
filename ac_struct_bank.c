//Make a structure to store bank account information of a customaer of ABC bank. Also make an alias for it.
#include<stdio.h>

typedef struct accountHolder{
    int accountNo;
    char name[50];
} AH;

int main(){
    AH acc1 ={1112343, "Anika"};
    printf("%d\n", acc1.accountNo);
    printf("%s",acc1.name); 
}