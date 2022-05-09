// Pattern Printing Problems
#include <stdio.h>
void nrm_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void rev_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void hollow_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == (n-1) || j == 0 || j == i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void nrm_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void hollow_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            if (i == (n-1) || k == 0 || k == i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void rev_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int x;
    printf("We Will create Some Pattern Problem.\n");
    scanf("%d", &x);
    printf("------------------------------------\n");
    nrm_triangle(x);
    printf("------------------------------------\n");
    rev_triangle(x);
    printf("------------------------------------\n");
    nrm_pyramid(x);
    printf("------------------------------------\n");
    rev_pyramid(x);
    printf("------------------------------------\n");
    hollow_triangle(x);
    printf("------------------------------------\n");
    hollow_pyramid(x);
    return 0;
}
