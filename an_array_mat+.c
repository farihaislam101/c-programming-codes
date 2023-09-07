#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], C [10][10], i, j;
    int numberOfRows, numberOfCols;
    printf("Enter the number of rows and column");
    scanf("%d %d",& numberOfRows,numberOfCols);

    printf("enter the elements for A matrix\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d]=", i,j);
            scanf("%d", &A[i][j]);
        }
            printf("\n");
    }
     printf("A=");
     for(i=0; i<numberOfRows; i++)
     {
        for(j=0; j<numberOfCols; j++)
        {
            printf("\t");
           printf("%d ",A[i][j]);     
        }
        printf("\n");
     }   
 printf("enter the elements for B matrix\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("b[%d][%d]=", i,j);
            scanf("%d",&B[i][j]);
        }
            printf("\n");
    }
     printf("B=");
     for(i=0; i<numberOfRows; i++)
     {
        for(j=0; j<numberOfCols; j++)
        {
            printf("\t");
           printf("%d ",B[i][j]);     
        }
        printf("\n");
     }   

}