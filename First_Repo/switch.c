#include <stdio.h>

int main(){

    int a;
    printf ("Enter Marks \n");
    scanf ("%d",&a);

   if (a>90 && a<=100)
   {
   printf("Your Grade is A");
   }

   else if (a>80 && a<=90)
   {
   printf("Your Grade is B");
   }

   else if (a>70 && a<=80)
   {
   printf("Your Grade is C");
   }

   else if (a>60 && a<=70)
   {
   printf("Your Grade is D");
   }

   else if (a>50 && a<=60)
   {
   printf("Your Grade is E");
   }

   else if  (50>=a)
   {
   printf("Your Grade is F");
   }

   else{
    printf ("Invalid Marks");
   } 
    return 0; 
} 