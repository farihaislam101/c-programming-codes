#include <stdio.h>
int main(){
    int a[10][10],b[10][10],r,c,i,j;
    printf("Enter the number of row and column:");
    scanf("%d %d", &r,&c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d]", i,j);
            scanf("%d",&a[i][j]);
        }   
   }
   printf("a=");
   for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        printf("\t");
        printf("%d", a[i][j]);

    }
    printf("\n");
   }
}


