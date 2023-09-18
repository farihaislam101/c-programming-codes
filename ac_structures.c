/*Structures
a collection of values  of different data types
syntax
struct student{
    char name[100];
    int roll;
    float cgpa;

};
*/
#include<stdio.h>
#include<string.h>

//user defined

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
struct student s1;
s1.roll =234;
s1.cgpa= 4.00;
strcpy(s1.name, "shraddha");

printf("student name = %s\n", s1.name);
printf("Students roll number is: %d\n", s1.roll);
printf("Students cgpa is: %.3f\n", s1.cgpa);
}