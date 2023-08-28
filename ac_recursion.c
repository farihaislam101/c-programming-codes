//print Helllo World 5 times 
#include<stdio.h>
void print_hlw(int count){
    if(count==0){
        return;
    }
    printf("HELLO WORLd \n");
    print_hlw(count-1);
        
    
}
int main(){
    print_hlw(5);
}