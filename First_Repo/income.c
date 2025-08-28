#include <stdio.h>

int main (){

    float income;
    printf ("Enter income in Lakh\n");
    scanf ("%f",&income);

    if (income>=2.5 && income<5)
    {
        printf ("Your amount of tax is %f thouusand\n",(income-2.5)*5);
    }
   
    else if (income>=5 && income<10)
    {
        printf ("Your amount of tax is %f thousand\n",(income-2.5)*2);
    }
   
    else if (income>=10)
    {
        printf ("Your amount of tax is %f thousand\n",(income-2.5)*3);
    }
   
    else 
    {
        printf ("You dont have to pay tax");
    }
    return 0;
}