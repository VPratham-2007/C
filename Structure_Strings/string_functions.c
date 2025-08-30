#include <stdio.h>
#include <string.h>
int main()
{
    char st[30] = "Pratham";
    char pq[] = " Vaghela";
    printf ("%lu\n",strlen(st)); // %d or %lu
    
    char tp [30];
    strcpy (tp,st);
    printf ("%s \n%s\n",st,tp);

    strcat (st,pq);
    printf ("%s\n",st);

    int a = strcmp ("hello","think");//According to ASCII Value 
    printf ("%d",a);

    return 0;
}