/*function declration
void printnumbers(int arr[], int n)
OR
void printnumbers(int *arr, int n)

function call
print numbers(arr, n);
*/

#include<stdio.h>

void printnumbers(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }  
}
    int main(){
        int arr[]={5, 10, 2, 8, 99, 15, 128, 26, 84, 17};
        printnumbers(arr, 10);
    }