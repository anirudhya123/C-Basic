#include <stdio.h>
#define funcDown 1
#define funcUp 2
#define funcLeft 3
#define funcRight 4

int main(int argc, char const *argv[])
{
    // Matrix Defined
    int n = 20, matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    // Co ordinates Defined
    int a = 0, b = 0;
    // Padding Defined
    int paddingBottom = n, paddingTop = 0, paddingLeft = 0, paddingRight = n;
    // Function Defined
    int func = funcRight;
    // Number defined
    int num = 1;

    // init loop
    while (num != n*n+1)
    {
        if (func == funcRight)
        {
            int i = 0;
            for (i = b; i < paddingRight; i++)
            {
                matrix[a][i] = num;
                num += 1;
            }
            paddingTop += 1;
            a = paddingTop;
            b = i - 1;
            // printf("%d \t %d \t %d \t \n", paddingTop, a, b);
            func = funcDown;
        }
        if (func == funcDown)
        {
            int i = 0;
            for (i = a; i < paddingBottom; i++)
            {
                matrix[i][b] = num;
                num += 1;
            }
            paddingRight -= 1;
            b = paddingRight - 1;
            a = i - 1;
            // printf("%d \t %d \t %d \t \n", paddingRight, a, b);
            func = funcLeft;
        }
        if (func == funcLeft)
        {
            int i = 0;
            for (i = b; i >= paddingLeft; i--)
            {
                matrix[a][i] = num;
                num += 1;
            }
            paddingBottom -= 1;
            b = i + 1;
            a = paddingBottom-1;
            // printf("%d \t %d \t %d \t \n", paddingBottom, a, b);
            func = funcUp;
        }
        if (func == funcUp)
        {
            int i = 0;
            for (i = a; i >= paddingTop; i--)
            {
                matrix[i][b] = num;
                num += 1;
            }
            paddingLeft += 1;
            b = paddingLeft;
            a = i+1;
            // printf("%d \t %d \t %d \t \n", paddingBottom, a, b);
            func = funcRight;
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
