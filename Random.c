// Short Code to use random number in C it is a function in stdlib.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandInt(int n)
{
    srand(time(NULL));
    return rand() % n;
}
// int main(int argc, char const *argv[])
// {
//     printf("Random NUmber between 1 to 10 is %d\n",RandInt(10));
//     return 0;
// }
