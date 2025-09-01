#include <stdio.h>  

int main (){

    float a[10],b[10];
    int no;
    char operation;
    printf ("The no of operations you want to do:\n");
    scanf ("%d",&no);
    printf ("Enter the first digit:\n");
    scanf ("%f",&a[0]);

    for (int i = 0; i < no; i++)
    {
        printf ("Enter another digit\n");
        scanf ("%f",&b[i]);
        printf ("Enter 'A' for Addition\nEnter 'S' for Subtraction\nEnter 'M' for Multiplication\nEnter 'D' for Division\n");
        scanf (" %c",&operation);

        if (operation == 'A')
        {
            a[i+1]=a[i]+b[i];
        }
        
        else if (operation == 'S')
        {
            a[i+1]=a[i]-b[i];   
        }

        else if (operation == 'M')
        {
            a[i+1]=a[i]*b[i];   
        }

        else if (operation == 'D')
        {
            a[i+1]=a[i]/b[i];   
        }
        
        else
        {
            a[i+1]=a[i];
        }

    }
    
    printf ("The final ans is %.2f\n",a[no]);

    return 0;
}