// Pascal Triangle
#include<stdio.h>

int fact(int x){
    int fact = 1;
    for (int i = x; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
    
}
int nCr(int n,int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            
                printf("%d ",nCr(i,k));
        
            

        }
        printf("\n");
        
    }
    
    return 0;
}

