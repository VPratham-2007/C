#include <stdio.h>

int main (){

    int a[3][2];
    
    printf ("Type the no \n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf ("%d",&a[i][j]);
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("The value is %d\n",a[i][j]);
            printf ("The value is %u\n",&a[i][j]);
            printf ("\n");
        }
        
    }

   
   
    return 0;
}