// Palindrome Number Exercise in C.
#include <stdio.h>
#include <string.h>
int palindrome(int x)
{
    int rev_x = 0, x_ = x;
    while (x != 0)
    {
        rev_x = rev_x * 10 + x % 10;
        x = x / 10;
    }
    if (x_ == rev_x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Kindly Enter a Number : ");
    scanf("%d", &a);
    if (palindrome(a))
    {
        printf("Palindrome.");
    }
    else
    {
        printf("!Palindrome.");
    }

    return 0;
}
