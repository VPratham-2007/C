#include <stdio.h>
#include <string.h>

int main(){
    
    char a[] = "My Name is Pratham :";
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = a[i] + 1;
    }
    printf ("%s",a);

    return 0;
}