//write functions to calculate area of a square, a circle & a rectangle
#include<stdio.h>
#include<math.h>
void Square_area(int side){
    printf(" The area of circle is: %d \n", side * side);
}
void circle_area(float rad){
    printf("The area of circle is: %f\n", 3.1416 * rad * rad);

}
void rectangle_area(int length, int width){
    printf("The area of rectangle is: %d", length * width);

}
int main(){
        int a = 5;
        Square_area(a);
        float b = 5;
        circle_area(b);
        int c=4;
        rectangle_area(a,c);

}