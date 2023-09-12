#include<stdio.h>
int main(){
    int a[30], b[30], n, i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Index number %d : ", i);
        scanf("%d", &a[i]);
    //printing a
    }
    printf("a[] = ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
//coying
for(i=0; i<n; i++)
{
    b[i]= a[i];
}
//printing b 
printf("b[]= ");
for(i=0; i<n; i++){
    printf("%d\t", b[i]);
}

}