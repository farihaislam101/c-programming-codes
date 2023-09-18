//arrow operator 
//(*ptr).code = ptr->code

#include <stdio.h>

struct student{
    char name[50]; 
    int roll;
    float cgpa;
    
};
int main(){
    struct student s1={"Anika",1547,5.00};
    struct student *ptr=&s1;
    
printf("students roll = %d\n", s1.roll);
printf("students roll with pointer= %d\n", (*ptr).roll);
printf("students roll with arrow= %d\n", ptr->roll);
printf("students cgpa with arrow= %.2f\n", ptr->cgpa);
printf("students name with arrow= %s\n", ptr->name);

}