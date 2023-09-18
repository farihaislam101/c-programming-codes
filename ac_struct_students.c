//write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>


struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
struct student s1;
s1.roll =234;
s1.cgpa= 4.00;
strcpy(s1.name, "fariha");

printf("students name = %s\n", s1.name);
printf("students roll number= %d\n", s1.roll);
printf("students cgpa= %.2f\n", s1.cgpa);
struct student s2;
s2.roll=235;
s2.cgpa=4.00;
strcpy(s2.name,"Anika");
printf("students name = %s\n", s2.name);
printf("students roll number= %d\n", s2.roll);
printf("students cgpa= %.2f\n", s2.cgpa);
  /* data */
struct student s3;
s3.roll=236;
s3.cgpa=4.00;
strcpy(s3.name,"Jarin");
printf("students name = %s\n", s3.name);
printf("students roll number= %d\n", s3.roll);
printf("students cgpa= %.2f\n", s3.cgpa);

}