#include<stdio.h>
int main(){

  int a[10];
   a[0]= 10;
   a[1]=20;
   a[2]=30;
   a[3]=40;
   a[4]=50;
   a[5] = 60;
   a[6] = 70;
   a[7] = 80;
   a[8] = 90;
   a[9]= 100;
    int sum = 0;

for (int i=0; i<10; i++){
        
        sum = sum + a[i];}
        printf("The sum is: %d\n",sum);
        printf("The average is: %d\n",sum/10);

//    printf("%d", a[0]);
}