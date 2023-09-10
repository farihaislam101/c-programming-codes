//write a function to count odd numbers in a array
#include<stdio.h>
int countOdd(int a[], int n ){
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 1)
        {
            count++;
        }
    }
    return count;

}
    int main(){
        int b[10];
        // taking input
        printf("Enter 10 numbers: \n");
        for(int i=0; i<10; i++)
        {
           printf("b[%d]=", i );
           scanf("%d",&b[i]); 

        }

        // for(int i =0; i<10; i++){
        //     printf("%d ", b[i]);
        // }
            printf("The number of odd number is:  %d ", countOdd(b,10));
    }
