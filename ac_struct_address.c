//Enter address (house no, block, city, state) of people
#include<stdio.h>
#include<string.h>

struct address
{
    int house;
    int block;
    char city[50];
    char state[59];
};
void printAdd(struct address add){
    printf("Address is : %d, %d, %s, %s", add.house, add.block, add.city, add.state);
}
int main(){
    struct address adds[5];
    //input
    printf("Enter info for person 1:");
    scanf("%d", &adds[0].house);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

     printf("Enter info for person 2:");
    scanf("%d", &adds[1].house);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

     printf("Enter info for person 3:");
    scanf("%d", &adds[2].house);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

     printf("Enter info for person 4:");
    scanf("%d", &adds[3].house);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

     printf("Enter info for person 5:");
    scanf("%d", &adds[4].house);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);
    
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    
}