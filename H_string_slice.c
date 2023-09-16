//Write a function slice to slice a string. it shuld change the original rting such thai it is now the sliced string.
//take m and n as the start and ending position for slice
#include <stdio.h>
#include <string.h>
void slice(char arr[], int n, int m){
    int i;
    int j=0;
    char newStr[100];
    for(i=n; i<m;i++,j++){
        newStr[j]=arr[i];
    

    }
    newStr[j]='\0';
    printf("%s",newStr);
}

int main(){
    char str[]="anika";
    slice(str,1,4);
}
