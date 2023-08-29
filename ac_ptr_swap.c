#include<stdio.h>
//swap 2 numbers, a & b.
// call by value
void swap(int a, int b){
    int c=a;
    a = b;
    b = c;
    printf("a=%d & b=%d\n",a,b);
}
//call by referance
    void _swap(int *a, int *b){
        int t= *a;
        *a = *b;
        *b = t;
    }
    int main(){
        int x =3;
        int y =5;
        swap(x,y);
        printf("x=%d & y=%d\n",x,y);
        _swap(&x,&y);
        printf("x=%d & y=%d", x,y);
    }