//typedef Keyword is used to create alias for data type
#include <stdio.h>
#include<string.h>

typedef struct ComputerScienceStudent
{
   char name[50];
   int roll;
   float gpa; 
} css;
    int main(){
        css s1;
        s1.roll=1547;
        s1.gpa=5;
        strcpy(s1.name, "Anika");
        printf("students name = %s\n", s1.name);
printf("students roll number= %d\n", s1.roll);
printf("students cgpa= %.2f\n", s1.gpa);
    }