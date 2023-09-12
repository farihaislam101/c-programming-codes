//string= a character array terminated by a '\0' (null character)
//create a string firstname & secondname to store details of user & print all the character s using a loop

#include<stdio.h>
void printString( char arr[]){
for(int i=0;arr[i]!='\0'; i++){
    printf("%c",arr[i]);
} 
printf("\n");   
}
int main(){
    char firstName[]="FARIHA";
    char lastName[]="ANIKA";
    printString(firstName);
    printString(lastName);

}