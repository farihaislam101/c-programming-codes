/*Declaration
data_type array_name[row_size][col_soze] ;
*/
#include<stdio.h>
int main()
{
    int i, j;
    int a[3][4]={{3, 4, 5},{2, 6, 7, 8}};
    for(i=0; i<3; i++){
        for(j=0;j<4; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
}