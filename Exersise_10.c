// This will be array multiplication
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, o, p,sum=0;
    printf("Chose your 1st matrix's row no - ");
    scanf("%d", &m);
    printf("Chose your 1st matrix's column no - ");
    scanf("%d", &n);
    printf("Chose your 2nd matrix's row no - ");
    scanf("%d", &o);
    printf("Chose your 2nd matrix's column no - ");
    scanf("%d", &p);
    if (n != o)
    {
        printf("1st matrix's Column no and 2nd matrix's Row no is not same so Multiplication isn't Possible. \n");
    }
    else
    {
        int matrix_1[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Give a Integer for [%d,%d] in Matrix 1 : ", i, j);
                scanf("%d", &matrix_1[i][j]);
            }
        }
        int matrix_2[o][p];
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < p; j++)
            {
                printf("Give a Integer for [%d,%d] in Matrix 2 : ", i, j);
                scanf("%d", &matrix_2[i][j]);
            }
        }
        int multiplied_matrix[m][p];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    sum += (matrix_1[i][k] * matrix_2[k][j]);
                }
                multiplied_matrix[i][j] = sum;
                sum = 0;
                
            }
            
        }
        for (int i = 0; i < m; i++)
        {
            for (int k = 0; k < p; k++)
            {
                printf("%d ",multiplied_matrix[i][k]);
            }
            printf("\n");
            
        }
        
    }

    return 0;
}
