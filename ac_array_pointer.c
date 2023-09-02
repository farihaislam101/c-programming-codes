//initialization of array
  //int marks []={3, 4, 5};
  //pointer arithmetic: pointer can be incrementd & decremented
  #include<stdio.h>
 /* int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr =%u\n ", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr= %u \n", ptr);
    }*/
  
// we can substract one ointer from another 
// we can compare two pointers
    int main (){
        int age =  22;
        int _age = 23;
        int *ptr = &age;
        int *_ptr= &_age;
        printf ("%u, %u difference = %u\n", ptr, _ptr, ptr - _ptr);
        _ptr = age;
        printf("comparison =%u\n", ptr==_ptr);
    }
