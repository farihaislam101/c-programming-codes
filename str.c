//Enter address (house no, block, city, state) of people
#include<stdio.h>
#include<string.h>

struct address
{
    int house;
    char block[100];
    char city[50];
    char state[59];
};
void printAdd(struct address add){
    printf(" Address is : House No- %d, block - %s, %s, %s \n", add.house, add.block, add.city, add.state);
}
int main(){

    struct address adds[5];
    // printf("Hello");
    for( int i=0; i<=2;i++){
    printf("Enter info for person: %d \n", i+1);

    printf("House No:");
    scanf("%d", &adds[i].house);

    printf("Block Name:");
    scanf("%s", &adds[i].block);

    printf("City Name:");
    scanf("%s", &adds[i].city);

    printf("District Name:");
    scanf("%s", &adds[i].state);
    }
    
    for (int i=0; i<=2;i++){

        printAdd(adds[i]);
    }
    
   
    
}