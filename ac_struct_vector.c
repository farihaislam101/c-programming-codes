// Create a structure to store vectors. Then make a function to return sum of 2 vectors.
#include<stdio.h>


struct vector{
    int x;
    int y;
    int z;

};
void calcSum(struct vector v1, struct vector v2, struct vector v3, struct vector sum){
sum.x =v1.x + v2.x + v3.x;
sum.y = v1.y + v2.y + v3.y;
sum.z = v1.z + v2.z + v3.z;
printf(" sum of x is: %d\n sum of y is: %d\n sum of z is: %d\n", sum.x, sum.y, sum.z);
}
int main(){
    struct vector v1={5, 10, 3};
     struct vector v2={6, 12, 4};
     struct vector v3={3, 4, 5};
     struct vector sum={0};
    calcSum(v1,v2,v3,sum);
}