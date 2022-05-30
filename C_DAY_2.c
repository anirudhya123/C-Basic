#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void absolute_value(int x)
{
    printf("the Absolute Value for %d is : %d \n", x, abs(x));
    if (x < 0)
    {
        printf("The Absolute Value for %d is %d\n", x, x * (-1));
    }
    else
    {
        printf("The Absolute Value for %d is %d\n", x, x * (1));
    }
}
void case_changer(char x)
{
    if (x >= 'A' && x <= 'Z')
    {
        x = x + 32;
        printf("%c", x);
    }
    else if (x >= 'a' && x <= 'z')
    {
        x = x - 32;
        printf("%c", x);
    }
    else
    {
        printf("Wrong_INPUT.\n");
    }
}
void Odd_Even(int x)
{
    if (x % 2 == 0 && x != 0)
    {
        printf("%d is a Even Number.\n", x);
    }
    else if (x == 0)
    {
        printf("O isn't Odd isn't even\n");
    }

    else if (x % 2 != 0 && x != 0)
    {
        printf("%d is a Odd Number.\n", x);
    }
    else
    {
        printf("Unsupported Data type.\n");
    }
}
void Largest_Smallest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        printf("The Largest NUmber is - %d\n", x);
    }
    if (y >= x && y >= z)
    {
        printf("The Largest NUmber is - %d\n", y);
    }
    if (z >= y && z >= x)
    {
        printf("The Largest NUmber is - %d\n", z);
    }
    if (x <= y && x <= z)
    {
        printf("The Smallest Number is - %d\n", x);
    }
    if (y <= x && y <= z)
    {
        printf("The Smallest NUmber is - %d\n", y);
    }
    if (z <= y && z <= x)
    {
        printf("The Smallest NUmber is - %d\n", z);
    }
}

void Leap_Year(int x)
{
    if (x % 400 == 0) // if a year % 400 is 0 it is leap year
    {
        printf("%d is a Leap Year. \n");
    }
    else if (x % 100 == 0) // if not divisible by 400 if it % 100 is 0 then not leap year
    {
        printf("%d isn't a leap year. \n");
    }
    else if (x % 4 == 0) // if % 400 and 100 both aren't 0 and % 4 is Zero it is leap year
    {
        printf("%d is a Leap Year. \n");
    }
    else
    {
        printf("Unsupported data Type.");
    }
}

void Quadratic_Equ(int a, int b, int c)
{
    double d, r_1, r_2, real, img;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r_1 = (-b + sqrt(d)) / (2 * a);
        r_2 = (-b - sqrt(d)) / (2 * a);
        printf("root 1 = %.2lf and root 2 = %.2lf", r_1, r_2);
    }
    else if (d == 0)
    {
        r_1 = r_2 = -b / (2 * a);
        printf("root 1 and root 2 = %.2lf", r_1);
    }
    else
    {
        real = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, img, real, img);
    }

}

int main(int argc, char const *argv[])
{
    return 0;
}
