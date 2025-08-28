#include <stdio.h>

int main(){
    
    float a,b,c,d;
    printf("Enter Total Marks per Subject\n");
    scanf("%f",&a);
    printf("Enter Marks of Mathematics\n");
    scanf("%f",&b);
    printf("Enter Marks of Physics\n");
    scanf("%f",&c);
    printf("Enter Marks of Chemistry\n");
    scanf("%f",&d);

    if (0.4<=((b+c+d)/(3*a)))
    {
        if (.33<=b/a && .33<=c/a && .33<=d/a)
        {
           printf ("You Pass");
        }
       
        else
        {
        printf ("You Fail becuase of less marks in individual subject");
        }
    }
    
    else
    {
        printf ("You Fail because of less total marks ");
    }

    return 0;
}