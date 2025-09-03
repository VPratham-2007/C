#include <stdio.h>

int value(int a[3][3]);
int value(int a[3][3])
{

    printf("Type the no \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int print(int a[3][3]);
int print(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int a[3][3], b[3][3], c[3][3];
    value(a);
    print(a);
    value(b);
    print(b);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[j][i] = (a[j][0] * b[0][i]) + (a[j][1] * b[1][i]) + (a[j][2] * b[2][i]);
        }
    }

    printf("\n");
    print(c);
    return 0;
}