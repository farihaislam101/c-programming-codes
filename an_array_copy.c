#include<stdio.h>
int main(){
    int n , i;
   int array2[30],array1[30];

  printf("How many numbers: ");
  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d", &array1[i]);
  }

  printf("Array1 is: ");
    for (i=0; i<n; i++){
        printf("%d\t",array1[i]);
    }
    //copying all the elements from array1 to array2
    
    for(int i=0; i<n; i++){
    array2[i]=array1[i];}
    printf("Array2 is: ");
    for(i=0; i<n; i++){
        printf("%d\t", array2[i]);
    }
}