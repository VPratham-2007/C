#include <stdio.h>

int main (){
    int n;
    printf ("Give the no of table you want : \n");
    scanf ("%d",&n);
    for (int i=10; i; i--)
    {
        printf ("%d multiplied by %d is %d\n",n,i,i*n);
    }

    return 0;
}