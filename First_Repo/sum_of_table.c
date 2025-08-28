#include <stdio.h>

int main (){
    
    int b=0,sum,a=1;
    for (int i = 1; i <=10; i++)
    {
        a = i*8;
        b = a+b;
    }
    
    printf ("So the sum of all digit upto 10 multiplied by 8 is %d",b);
    return 0;
}