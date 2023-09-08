#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],i,j,numOfRow,numOfColumn, c[10][10];
    printf("Enter the number of row and column");
    scanf("%d %d", &numOfRow, &numOfColumn);

    printf("Enter elements for A matrix\n");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            printf("A[%d][%d]=", i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("A=");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements for B matrix\n");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            printf("B[%d][%d]=", i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("B=");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            printf("\t");
            printf("  %d",B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            c[i][j]= A[i][j] + B[i][j];

        }
    }
    printf("\n");
    printf("A+B=");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfColumn; j++)
        {
            printf("\t");
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

}