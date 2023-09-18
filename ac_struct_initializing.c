/*Initializing Structures
struct student s1={"shradha",1664,4.00};
struct student s2={"Anika",1547,4.00};
struct student s3={0};*/
#include <stdio.h>

struct student{
    char name[100]; 
    int roll;
    float cgpa;
    
};
int main(){
    struct student s1={"Anika",1547,5.00};
printf("students name = %s\n", s1.name);
printf("students roll number= %d\n", s1.roll);
printf("students cgpa= %.2f\n", s1.cgpa);
}