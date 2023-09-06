//Write a function to reverse array
#include <stdio.h>
void reverse(int arr[], int n){
    for (int i=0; i<n/2; i++){
        int firstVal= arr[i];
        int secondVal= arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;

    }
}
    void printArr(int arr[], int n){
        for (int i=0; i<n; i++){
            printf("%d\n", arr[i]);
        }
    }
    int main(){
        int arr[]={1,2,3,4,5,6,7};
        reverse(arr,7);
        printArr(arr,7);
    }