 #include <stdio.h>

int main (){

    int a,b=0,c=0;
    printf ("Give the value of n which we have to find the sum\n");
    scanf  ("%d",&a);
   
    while (b<=a)
    {
        c = b+c;
        b++;
    }
    
    printf ("The sum of first %d natural no is %d \n",a,c);
    return 0;
}

   