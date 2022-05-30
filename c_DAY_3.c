#include <stdio.h>

void swap_bit(int x, int y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After Swapping Values are %d,%d", x, y);
}

void Zero_One(unsigned int x)
{
    int No_0 = 0, No_1 = 0;
    while (x > 0)
    {
        if (x & 1)
        {
            No_1++;
        }
        else
        {
            No_0++;
        }
        // printf("%i",x);
        x = x >> 1; // right shifting
    }
    printf("The NUmber of Zero is %d and 1 is %d", No_0, No_1);
}

//  Integer number can be represented by 16 bits.
// To convert the Decimal Number into Binary , Check First MSB bit of number , if it is 1 then display ‘1’ otherwise display ‘0’.
void binary(unsigned int num)
{
    unsigned int mask = 32768; // mask = [1000 0000 0000 0000]
    printf("Binary Equivalent : ");

    while (mask > 0)
    {
        if ((num & mask) == 0)
            printf("0");
        else
            printf("1");
        mask = mask >> 1; // Right Shift
    }
}
void ternary(int x, int y, int z)
{
    int a, b;
    a = x > y ? x : y; // max value choosing from x and y and storing into a
    b = a > z ? a : z; // max value between a and z then storing into b
    printf("the Max Value is %d \n", b);
    a = x < y ? x : y; // min value choosing from x and y and storing into a
    b = a < z ? a : z; // min value between a and z then storing into b
    printf("the Min Value is %d \n", b);
}
void Vowel_consonant(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                printf("\n %c is a VOWEL.", ch);
            }
            else
            {
                printf("\n %c is a CONSONANT.", ch);
            }
        }
    }
}
void switch_Case_Cal(int x, int y){
    int z;
    printf("Choose Between 1-4\n");
    scanf("%d",&z);
    switch (z)
    {
    case 1:
        printf("%d + %d = %d \n",x,y,(x+y));
        break;
    case 2:
        printf("%d - %d = %d \n",x,y,(x-y));
        break;
    case 3:
        printf("%d * %d = %d \n",x,y,(x*y));
        break;
    case 4:
        printf("%d * %d = %d \n",x,y,(x/y));
        break;
    
    default:
        break;
    }


}
int main(int argc, char const *argv[])
{
    switch_Case_Cal(15,20);
    return 0;
}
