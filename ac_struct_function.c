//function Prototype
//void printInfo(struct student s1);
#include <stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
    float gpa;
};

void printInfo(struct student s1){
    printf ("Student information\n");
    printf("students name : %s\n",s1.name);
    printf("students roll : %d\n",s1.roll);
    printf("students gpa : %.2f\n",s1.gpa);
}
    int main(){
        struct student s1={"Anika",1547,5.0};
        printInfo(s1);
    }