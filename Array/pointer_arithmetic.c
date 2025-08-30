#include <stdio.h>

int main(){

    int a=5;
    int* ptr1=&a;
    printf ("The location of %d is %u\n",a,&a); 
    printf ("The location of %d is %u\n",a,ptr1); 
    ptr1 ++; // Increment of 4 as it takes 4 bit to store the data
    printf ("The location of %d is %u\n",a,ptr1); 

    char b='B';
    char* ptr2=&b;
    printf ("The location of %c is %u\n",b,&b); 
    printf ("The location of %c is %u\n",b,ptr2); 
    ptr2 ++; // Increment of 1 as it takes 1 bit to store the data
    printf ("The location of %c is %u\n",b,ptr2); 

    return 0;
}