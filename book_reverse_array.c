#include<stdio.h>
int main(){
    int ara[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ara1[10];
    int i,j;
    for( i=0, j=9; i<10; i++, j--){
        ara1[j]=ara[i];
        // printf("%d ", ara1[j]);
        //printf("  %d is stored inside %d index \n", ara1[j], j);
    }
    for(i=0; i<10; i++){
        ara[i]=ara1[i];
    }
    for(j=0; j<10; j++){
        printf("%d  ", ara[j]);
    }
}