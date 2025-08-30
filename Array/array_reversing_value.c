#include <stdio.h>

    void printArray(int a[],int n){
        for (int i = 0; i < n; i++)
        {
            printf ("%d ",a[i]);
        }
        printf ("\n");
    }
    
    void reverseArray(int a[],int n){
        int temp;
        for (int i = 0; i < n/2; i++) // i < 3
        {
            int temp = a[i];  // temp = a(0) | temp = a(1) | temp = a(2) |
            a[i] = a[n-i-1];  // a(0) = a(5) | a(1) = a(4) | a(2) = a(3) | 
            a[n-i-1] = temp;  // a(5) = temp | a(4) = temp | a(3) = temp | 
        }
        
    }

int main (){
 
    int a[] = {1,2,3,4,5,6};

    printArray (a,6);
    reverseArray (a,6);
    printArray (a,6);
    
    printf ("\n");

    int b[] = {1,2,3,4,5,6,7};

    printArray (b,7);
    reverseArray (b,7);
    printArray (b,7);
    return 0;
}