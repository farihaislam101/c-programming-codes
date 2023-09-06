/*Multidiimentional array
2D array
int arr[][]={{1,2}{3,4}};
Access
arr[0][0]
arr[0][1]
arr[1][0]
arr[1][1]*/

#include <stdio.h>

int main(){
    int marks[2][3];

     marks [0][0]=98;
     marks [0][1]=97;
     marks [0][2]=76;
     marks [1][0]=80;
     marks [1][1]=88;
     marks [1][2]=81;

     printf("%d", marks[0][0]);
}