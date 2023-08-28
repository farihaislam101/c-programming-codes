//Write a function to calculate percentage of a student from marks in science, math & English
#include<stdio.h>
int percentage(int science, int math, int english){
    return(science+math+english)/3;
}

    int main(){
        int sci, math, eng;
        printf("enter the number of science ");
          scanf("%d", &sci);
        printf("enter the number of math ");
          scanf("%d", &math);
        printf("enter the number eng ");
           scanf("%d", &eng);
           int s= percentage(sci, math, eng);
        printf("The percentage is: %d", s);   

    }