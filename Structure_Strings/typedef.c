#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}Emp;

int main()
{

    Emp a;
    a.code = 202501;
    a.salary = 14;
    strcpy (a.name,"Max");

    Emp* ptr = &a;

    printf("Employee A %d %.2f %s\n",a.code,a.salary ,a.name);
    printf("Employee A %d %.2f %s\n",ptr->code,ptr->salary ,ptr->name);
    printf("Employee A %u %u %u\n",&ptr->code,&ptr->salary ,&ptr->name);



    return 0;
}