#include <stdio.h>
int main(int argc, char const *argv[])
{
    int square[5][5] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", square[i][j]);
        }
        printf("\n");
    }
    int a = n / 2, b = n - 1;

    for (int i = 1; i <= n * n; i++)
    {
        if (square[a][b] == 0)
        {
            square[a][b] = i;
        }
        else
        {
            a = a + 1;
            b = b - 2;
            square[a][b] = i;
        }
        a = a - 1;
        b = b + 1;
        if (a < 0 && b > n-1)
        {
            a = 0;
            b = n - 2;
        }
        else
        {
            if (a < 0)
            {
                a = n - 1;
            }
            if (b > n-1)
            {
                b = 0;
            }
        }
        printf("%d \t %d", a, b);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
