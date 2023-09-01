// Write a program having a variable i. Print the addressof it.
// Pass this variable to  afunction and print its address
# include<stdio.h>
void printadd(int a){
    printf("The address of variable a is: %u\n", &a);
}
int main(){
  int i = 4; 
  printf("the address of i is: %u\n",&i); 
  printadd(i);
  printf("The address of variable i is :%u\n",&i);
}