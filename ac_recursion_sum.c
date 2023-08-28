//sum of first n natural numbers
#include<stdio.h>
int sum(int n){
//    if(n==1)
//         return 1;
//     else
//       return sum(n-1)+n;

if(n==1){
    return 1;
}
int sumN =sum(n-1)+n;
return sumN;

}


 int main(){
    int result = sum(10);
    printf("Sum is : %d", result);
 }




