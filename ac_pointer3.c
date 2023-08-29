#include<stdio.h>
void printaddress(int *n){
    printf("address of n id : %u\n", n);
}
int main (){
    int m =4;
    printaddress(&m);
 printf("address of m id : %u\n", &m);

}