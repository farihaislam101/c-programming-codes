#include<stdio.h>
int main(){
    int age = 22;
   int *ptr= &age;
   //address priting

  
   printf("%u\n", &age); 
    printf("%u\n", ptr);
    printf("%u \n", &ptr);

//value printing
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

}