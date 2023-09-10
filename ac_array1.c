//Write a program to enter the price of 3 items & print their final cost with gst

#include<stdio.h>
int main(){
    int price[3],i;
    printf("Enter 3 price: \n");
    
    for(i=0; i<3; i++)
    {
        printf("price[%d] = ", i);
        scanf("%d",&price[i]);
    }
   // scanf("%f", &price[0]);
    //scanf("%f", &price[1]);
    //scanf("%f", &price[2]);

    for(i=0; i<3; i++)
    {

        printf("Total price of 1: %d\n Total price of 2: %d\n Total price of 3: %d", price[i]);
    }
}
   // printf("total price of 1 :%f\n",price[0]+(0.18*price[0]));
     //   printf("total price of 2 :%f\n",price[1]+(0.18*price[1]));
       //     printf("total price of 3 :%f\n",price[2]+(0.18*price[2]));

/*int main(){
    int n;
    printf("Enter the value of n");
    scanf ("%d", &n);
    int a[n],sum=0, i;
    printf("Enter 5 numbers");
   // scanf("%d %d %d %d %d", &a[0],&a[1], &a[2], &a[3], &a[4]);
   for(i=0; i<n; i++){
    scanf("%d", &a[i]);
   }
    for(i=0; i<n; i++) {
        sum= sum+a[i];
    }
    printf("The sum is: %d",sum);
    printf("The average is: %.2f",(float)sum/5 );
}

}*/