#include <stdio.h>

int main (){
    
    int a=5;
    int marks[5];
    printf ("Enter Marks of %d students\n",a);
    for (int i = 0; i < 5; i++)
    {
        scanf ("%d",&marks[i]);
    }
    
    for (int i  = 0; i < 5; i++)
    {
        printf ("The marks of %d student is %d\n",i+1,marks[i]);
    }
    

    return 0;
}