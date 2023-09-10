#include<stdio.h>
void reverse(int arr[], int n){
    for(int i=0;i<n/2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i]=secondValue;
        arr[n-i-1]=firstValue;
    }
}

void printReverseArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){
    int a[]={1, 2, 3, 4, 5, 6};
    reverse(a,6);
    printReverseArray(a,6);

}