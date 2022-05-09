/*There is two ways to solve problems in programme one is iterative done with Loops and another is Recursion. It 
means function calling him self to solve the problem. Recursion has two cases 1. Base Case - The case where the 
the function doesn't recur it self . 2. Recursive Case - Where function keep calling him self and try to reach base
case by dividing the problem into some smaller part.
Now let me summarize whole recursions. So Recursion is a process in which any function keeps calling itself till
any termination condition is satisfied and in simple words you can think Recursions as same like iteration because 
in both of them repetition occurs till any condition is satisfied or becomes false.
And the most important thing during using recursions is it’s termination condition because most of time
the condition given in recursive function is wrong and because of that the function is executed infinitely or for 
forever.*/
// Some Problems for Recursion - Tower of Hanoi, Fibonacci series, Factorial Finding.
#include<stdio.h>
int factorial(int n){
    if (n == 1 || n == 0){
        return 1; // as we know factorial of 1 and 0 is one and it is the base case for this recursive programme
    }
    else{
        return (n * factorial(n-1)); // as we know 5! = 5 * 4! means n! = n * (n-1)! and it is the recursive case.
    }
}
int adder(int n){
    if (n == 1){
        return 1;
    }
    else{
        return (n + adder(n-1));
    }
}
int fibonacci(int n){
    if (n == 1){
        return 0; // as we know fibonacci of 1 is 0 and it is one of the base cases
    }
    else if (n == 2){
        return 1; // another is fibonacci of 2 is 1 
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2)); // formula for fibonacci is Fn = Fn-1 + Fn-2 and it is the recursive case
    }
}
int main(int argc, char const *argv[])
{
    int f;
    printf("Give a Number : ");
    scanf("%d",&f);
    printf("Factorial For %d is %d\n",f,factorial(f));
    printf("Fibonacci For %d is %d\n",f,fibonacci(f));
    printf("Adder For %d is %d",f,adder(f));
    return 0;
}
