#include <stdio.h>
//skip to next iteration
//print all numbers from 1 to 10 exept for 6
int main (){
for (int i = 1; i<=10; i++){
    if(i==6){
       continue; 
    }
    printf("%d \n", i);
}
}