#include <stdio.h>
#include<math.h>
void sum_of_digits(int x)
{
    int sum_of_digit = 0;
    while (x > 0)
    {
        int y = x % 10;
        sum_of_digit += y;
        x = x / 10;
    }
    printf("The Sum of Digits is %d.\n", sum_of_digit);
}
int reverse_of_digit(int x)
{
    int reversed_digit = 0;
    while (x > 0)
    {
        int y = x % 10;
        reversed_digit = reversed_digit * 10 + y;
        x = x / 10;
    }
    return reversed_digit;
}

int Prime_checker(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
    }

    return 1;
}

void GoldBach(int x)
{
    int increment = x / 2;
    int decrement = x / 2;
    if (x % 2 != 0)
    {
        printf("It isn't a Even Number.\n");
    }
    else
    {
        for (int i = 0; i < x / 2; i++)
        {
            if (Prime_checker(increment + i) == 1 && Prime_checker(decrement - i) == 1)
            {
                if (((increment + i) + (decrement - i)) == x)
                {
                    printf("The Numbers are %d and %d.\n", (increment + i), (decrement - i));
                    break;
                }
            }
        }
    }
}

void Automorphic(int x)
{
    int sq_x = x * x;
    while (x != 0)
    {
        int y = x % 10;
        int z = sq_x % 10;
        if (y != z)
        {
            printf("It is not an Automorphic.");
            break;
        }
        x = x / 10;
        sq_x = sq_x / 10;
    }
    printf("It is an Automorphic Number.");
}

int Armstrong(int x){
    int arm_num = 0;
    while (x!=0)
    {
        int y = x%10;
        arm_num += pow(y,3);
        x = x/10;
    }
    return arm_num;
}
void Armstrong_checker(int x){
    if (x == Armstrong(x))
    {
        printf("It is an Armstrong Number.\n");
    }
    
}

int main(int argc, char const *argv[])
{   
    return 0;
}
