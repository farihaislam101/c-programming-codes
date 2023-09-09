//sum f diagonal elements
#include<stdio.h>
int main()
{
    int a[3][3], i, j , row, col, sum=0;
  // Getting the elements for the matrix
  printf("Enter the elements of the matrix\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
        printf("a[%d][%d]=", i, j);
        scanf("%d", &a[i][j]);
    }
  }

   printf("\n A=\n");
   for (i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
    {
        printf("\t");
        printf("%d",a[i][j]);
    }
        printf("\n");
   } 
    // sum of diagonal elements
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i==j)
                sum=sum+ a[i][j];
            }
        }
      // Printing the value
        printf("sum of diagonal element= %d\n" , sum);  
        

}
