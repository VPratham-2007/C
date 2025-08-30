#include <stdio.h>

int multi(int c, int n)
{
    return c * (n + 1);
}

int main()
{

    int x[3];
    int b[10][3];

    for (int i = 0; i < 3; i++)
    {
        printf("Give %d no for multiplication table \n ", i + 1);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        multi(x[0], i);
        b[i][0] = multi(x[0], i);
    }

    for (int i = 0; i < 10; i++)
    {
        multi(x[1], i);
        b[i][1] = multi(x[1], i);
    }

    for (int i = 0; i < 10; i++)
    {
        multi(x[2], i);
        b[i][2] = multi(x[2], i);
    }

    printf("\nFull Tables\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}