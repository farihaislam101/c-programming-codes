#include <stdio.h>
/*syntax
int marks[3];3 indicates how many integers
char name[10]
float price[2]

intput
scanf{"%d", &marks[0]}; 0=1st number;1=2nd number
printf("%d",marks[0])
*/
int main(){
    int marks[3];
    printf("Enter physics number:");
    scanf("%d", &marks[0]);
    printf ("Enter chemistry number:");
    scanf("%d", &marks[1]);
    printf("Enter Math number:");
    scanf("%d",&marks[2]);
    printf("physics = %d, chemistry = %d, math=%d", marks[0], marks[1], marks[2]);
}