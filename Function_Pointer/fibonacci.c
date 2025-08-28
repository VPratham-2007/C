#include <stdio.h>

int fibo (int);

int fibo (int a){
    if (a == 0)  // base case 1
        return 0;
    if (a == 1)  // base case 
    return 1;
    return fibo(a-1) + fibo(a-2);
}
 
int main (){
    
    int a;
    printf ("Which No of Fibonacci series do you want\n");
    scanf ("%d",&a);
    printf("The Fibonacci no at %d position is %d\n",a,fibo(a));
    return 0;
}