#include <stdio.h>
#include "C_Day4.c"

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Krishnamurti(int x)
{
    int krishna = 0, y;
    while (x != 0)
    {
        y = x % 10;
        krishna += factorial(y);
        x = x / 10;
    }
    return krishna;
}

void Krishnamurti_checker(int x)
{
    int krishnaN = Krishnamurti(x);
    if (krishnaN == x)
    {
        printf("It is a Krishnamurti Number.\n");
    }
}
void Sum_of_Primes(int x)
{
    int sumOfPrime = 0;
    for (int i = 1; i <= x; i++)
    {
        if (Prime_checker(i))
        {
            sumOfPrime += i;
        }
    }
    printf("%d is the Sum of %dth Prime Number.\n", sumOfPrime, x);
}
void FibonacciXPrime(int x)
{
    int a = 0, b = 0, c = 1;
    for (int i = 0; i < x - 1; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if (Prime_checker(a))
        {
            printf("%d is a Prime Fibonacci Number.\n",a);
        }
        
    }
}

void Twin_Prime(int x){
    for (int i = 1; i < x; i++)
    {
        if (Prime_checker(i) && Prime_checker(i+2)) 
        {
            printf("The Twin Primes are - %d %d\n",i,i+2);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    return 0;
}
