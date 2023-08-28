# include<stdio.h>

void printtable(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n", n*i);
    }
}
    int main(){
        int n;
        printf("Enter Number");
        scanf("%d", &n);
        printtable(n);
    }