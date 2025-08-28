#include <stdio.h>

long factorial(long);

long factorial(long n){
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


int main (){
    
    int a;
    
    printf ("Give the no you want to find factorial of \n");
    scanf ("%d",&a);
    printf ("The factorial of %d is %ld",a,factorial(a));

    return 0;
}
    
    
