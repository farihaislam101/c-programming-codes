#include<stdio.h>
int main(){
    int adhar[5];

    //input 
    int *ptr = &adhar[0];
    for(int i=0; i<5; i++){
        printf("%d index:", i);
       // scanf("%d ",(ptr+i));
        scanf("%d", &adhar[i]);
    
    }
    //output
    for(int i=0; i<5; i++){
    printf("%d index = %d \n", i, adhar[i]);
    //printf("%d index = %d\n", i, *(ptr+i));

    
    }
    
}