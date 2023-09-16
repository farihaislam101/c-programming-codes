//Write a function to count the occurrence of vowel in a string.
#include<stdio.h>
int countVowels(char str[]){
    int count =0;
    
    for(int i =0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}
    int main()
    {
        char arra[]="Farihaislamanika";
      //  countVowels(arra);
        printf("The number of vowels are : %d", countVowels(arra));
    }