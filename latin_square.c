#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 3, square[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    
    for (int i = 0; i < n; i++)
    {   
        
        for (int j = 0; j < n; j++)
        {
            if (j+i+1 < n+1)
            {
            square[i][j] = j + i + 1;
            }
            else{
            square[i][j] = j + i +1 - n;
            }
            
        }
        
    }
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
