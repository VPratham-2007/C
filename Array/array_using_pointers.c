#include <stdio.h>

int main (){

    int marks[] = {78,53,45,35};
    int* ptr = marks; // Same as (int* ptr = &marks[0];)

    for (int i = 0; i <= 3; i++)
    {
        printf ("The address of marks %d is stored at %u\n",marks[i],ptr);
        ptr++;
    }
    
    return 0;
}