/* # Format Specifier is used to clarify which type of data will be printed or can be taken .
%c -> Used to print the character

%d -> Used to print the signed integer

%f -> Used to print the float values

%i -> Used to print the unsigned integer

%l -> Used to long integer

%lf -> Used to print the double integer

%lu -> Used to print the unsigned int or unsigned long integer

%s -> Used to print the String

%u -> Used to print the unsigned integer

### A special case in format specifier is %a.bf what is meant by a.b here. a stands for the number of white space before the Number to be printed and -a stand for after and b stands for the Number of floating points you want after point.

# Constant - Value Can't be Changed. Written between Double Quotes. Two ways to define constant using # define preprocessor and adding constant before a variable.
# Escape Sequence -  Sequence of Character to play some different roles . as \n for space \t for tab \a for beep etc
\t ->Inserts a tab

\b -> Inserts a backspace

\n -> Inserts a newline.

\r -> Inserts a carriage return.

\f -> Inserts a form feed.

\’ -> Inserts a single quote character.

\” -> Inserts a double quote character.

\\ -> Inserts a backslash character.
*/
#include <stdio.h>
#define PI 3.14 // one way to change
int main(int argc, char const *argv[])
{
    int a = 5, b = 5;
    float c = 4.5;
    const float d = 2.5; // this is another way to create constant.
    // d = 3.5; it will also give error
    // PI = 3.145; if you try to do this it will show some error
    printf("This is the Int Format %d\n", a);
    printf("This is the Float Format %f\n", c);
    printf("Understand the a.b format %10.5f\n", c);               // see after point only 5 numbers are there. and also can able to see some space for the 10 and this a should be greater than the length of the string and the white space number will be string length - a .
    printf("Understand the -a.bf format %-10.5f see the gap.", d); // just try to realise what is going on
    printf("It is a beep \a"); // you can hear the sound i guess.
    printf("It is a tab \t");
    printf("It is a Form Feed \f"); // inserts a form feed
    return 0;
}
