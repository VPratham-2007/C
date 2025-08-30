#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sum_of_vector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.i + v2.j};
    return v3;
}

int main()
{

    struct vector v1 = {1, 2};
    struct vector v2 = {5, 10};
    struct vector v3 = sum_of_vector(v1, v2);
    printf("Sum of vector is %di + %dj", v3.i, v3.j);
    return 0;
}