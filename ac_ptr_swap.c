#include<stdio.h>
//swap 2 numbers, a & b.
// call by value
void swap(int a, int b){
    int temp=a;
    a = b;
    b = temp;
    printf("a=%d & b=%d\n",a,b);
}
//call by referance
    void _swap(int *a, int *b){
        int t= *a;
        *a = *b;
        *b = t;
        printf("a=%d & b=%d\n",*a,*b);
    }
    int main(){
        int x =22;
        int y =44;
        swap(x,y);
        printf("x=%d & y=%d\n",x,y);
        _swap(&x,&y);
        printf("x=%d & y=%d", x,y);
    }