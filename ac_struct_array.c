#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[50];
};
int main (){
    struct  student ece [100];
    ece[0].roll=1664;
    ece[0].cgpa=4.00;
    strcpy (ece[0].name,"Anika");
    printf("students name = %s\n", ece[0].name);
    printf("students roll number= %d\n", ece[0].roll);
    printf("students cgpa= %.2f\n", ece[0].cgpa);
}