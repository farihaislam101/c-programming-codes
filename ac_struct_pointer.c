/*
pointers to structures
struct student s1
struct student *ptr;
tr =&s1;
*/
#include<stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[50];
};
int main(){
    struct student s1={1547,4.00,"Anika"};
    struct student *ptr= &s1;
    printf("student roll=%d\n", (*ptr).roll);
}








