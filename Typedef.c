/*
So, what is typedef it is used to rename a data type. That's it. typedef <current_name> <new_name> .
Usage -
1. Increase Clarity, Readability, etc . let's visualize some usage.

Basic Syntax
*/
#include <stdio.h>
// you can rename a structure data type also
typedef struct Student // name of the data type
{
    int rno; // variables under Students
    int class;
    char section;
    char full_name[100];
} std; // after struct to before std is the previous name now don't think old name will not accessable both are use ful.
int main(int argc, char const *argv[])

{
    // 1. Renaming long datatypes
    typedef unsigned long ul;
    typedef int integer;
    ul l1, l2, l3;  // see it isn't giving a error at all but if you comment out typedef part it will not work.
    integer r = 34; // you can choose your favourable name
    struct Student s1, s2;
    std s3, s4; // both are same
    // Another use in Pointer 
    // int* a, b; // you may think those two are pointer variable but now only a is pointer variable 
    // to overcome this type of problem we can use typedef also as we can rename pointer variable
    typedef int* int_pointer;
    int_pointer a,b;
    int c = 12;
    a = &c;
    b = &c; // it is giving error as the B isn't pointer  and after using type def it is working.
    printf("%d \n", r);

    return 0;
}
