#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee a[3];

    for (int j = 0; j < 3; j++)
    {
        printf("Enter code salary and Name of employee %d\n", j + 1);
        scanf("%d %f %s", &a[j].code, &a[j].salary, a[j].name);
    }
    

    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d: %d %.2f %s\n", i + 1, a[i].code, a[i].salary, a[i].name);
    }

    return 0;
}