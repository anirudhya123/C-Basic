// Flow of a C programme is Preprocessing -> Compilation -> Assembly -> Linking -> Loading
// Variable is giving a name of memory location here we have to tell the type or data type for a variable .
// Rules -
// Can contain Number, alphabet, Underscore but can't start with Numeric. No white space and reserved key word
// Data Types -
// Basic - Int, Float, Char, Double
// Derived Data type - (Created using more than one Basic Data type) -  array, pointer, Structure, Union
// Enumeration Data type - enum
// Void Data Type - Void (Empty.)
// Every data type having some size read that chat from Internet of use sizeof() function
// C having some basic operator as + - * /
// Also having some pre build function as printf() scanf() also a function can be created
#include <stdio.h>

int main()
{
    int a, b=45;
    a = 20; // some ways to define a variable
    printf("%lu", sizeof(int)); // using size of function
    return 0;
}
// as you will work with C more the concepts will be cleared.