/*
Bit wise Revision
Here the logic is pretty simple - we will compare every bits of the number with 1 bit using and operator and
once both are 1 then it will return 1 other wise Zero now we will use one and compare with each 1b bits according
to so that we will left shit one's position and will compare as we have to print from last we will shit 15 then
to 1 pretty simple. bitwise and will compare the particular bit by own so it's the concept and will use in other
functions also. operator can be changed according to the function.
*/
#include <stdio.h>

void show_bit_pattern(int number)
{
    int k;
    for (int i = 15; i >= 0; i--)
    {
        k = 1 << i;
        number &k ? printf("1") : printf("0");
    }
    printf("\n");
}
void bit_on_off(int number, int index)
{
    int k;
    k = 1 << (index - 1);
    number &k ? printf("1") : printf("0");
    printf("\n");
}
void toggle_bit(int number, int index)
{
    int k;
    k = 1 << (index - 1);
    number ^ k ? printf("1") : printf("0"); // why Xor as we know when the bits are diff then Xor returns true here
    // here the k always 1 so when number will be zero it will true and print 1 and number 1 will return false
}
void reset_bit(int number, int index)
{
    int k;
    k = 0 << (index - 1);
    number & k ?printf("0"):printf("1"); // reset bit means turning the bit off
}
void set_bit(int number, int index)
{
    int k;
    k = 0 << (index - 1);
    number | k ?printf("0"):printf("1"); // set bit means turning the bit on
}
int main(int argc, char const *argv[])
{
    show_bit_pattern(456);
    bit_on_off(456, 14);
    toggle_bit(456, 14);

    return 0;
}
