// Fibonacci Series in Both ways
#include <stdio.h>
// Recursive Method
int recFibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return recFibonacci(n - 1) + recFibonacci(n - 2);
    }
}
int iteFibonacci(int n)
{
    int a = 0, b = 1, c=a+b;
    for (int i = 0; i < n-1; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    return a;
}
int main(int argc, char const *argv[])
{
    printf("%d\n",iteFibonacci(2));
    printf("%d\n",recFibonacci(2));
    return 0;
}
