/*
C Language Provides two methods of type casting :

Implicit type casting
Explicit type casting
Implicit type casting : Implicit type casting means conversion of data types from one to another without losing its original meaning or sense.

In this type casting program automatically converts the variable from one data type to other. It follows strict rules in converting data type of variables as it always converts lower data types to higher ones.
Explicit type casting : Explicit type casting means conversion of data type from one to another forcefully by programmer. It is user defined conversion.
*/

// In every programming language we have to cast type on any of points here we have to write (type) value to to cast
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 50;
    float b = 5.056;
    float c = (float)79 / 28;                  // after casting type c will be a correct floating value.
    printf("The value of B is %d \n", (int)b); // it will give some weird value so use (int) b
    printf("The Value of C is %f \n", c);      // it giving normal value as we know in C when two ints calculates output also be int but we can use type casting.
    return 0;
}
