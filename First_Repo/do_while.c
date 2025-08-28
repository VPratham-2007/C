#include <stdio.h>

int main (){

    int a,i=1;
    printf ("Till which no do you want to write all natural no : \n");
    scanf ("%d",&a);
    do
    {
        printf ("\n%d\n",i++);

    } while (i<=a);
    


    return 0;
}