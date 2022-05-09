/*
Before going to this topic we have to relearn some old topic .
1. Scope - is a region of the programme where a defined variable can exist beyond which it can't be accessed. in easy language
it is used to define working area of any variable.
2. Local Variable - Which can only be accessed, defined, called into some function or block.
3. Global Variable - it can be accessed, defined, called thorugh out the programme.
*** If a global and local variable are in same name local variable will get preference ***
4. Formal Parameter - Parameter used into a function not when you are calling into main and giving argument. It also
treated as a local variable.

## Static Variable -  ability to preserve value out of scope. once they initialize it can't be called. At the
beginning of the programme it takes a memory location and keep intact for whole programme that's why it only created
using a constant value it can't created by dynamic values as function return value. If you just declare it default
it will take 0 as it's value.   << static Datatype Variable_name = Variable_value;  >>
*/
// Basic Syntax
#include <stdio.h>
int global = 45;
int print_text(char a[500])
{
    printf("Address of a into function :  %d \n", &a);
    printf("%s \n", a);
    printf("%d\n", global);
    int global = 20;
    printf("%d\n", global);

    return 0;
}
int static_func(int a)
{
    static int static_val = 99; // default if not defined while declaring it will be Zero
    static_val++;
    printf("the value for the static is : %d \n", static_val);
    return a * static_val;
}
int main(int argc, char const *argv[])
{
    char a[] = "I am a good boy.";
    int b = 12;
    printf("Address of a into main : %d \n", &a); // both are different
    print_text(a);
    printf("%d\n", global);
    int global = 205;       // understand the concept of global local and precedence
    printf("%d\n", global); // after defining same name local variable the value changed.
    static_func(b);
    static_func(b);
    static_func(b);
    static_func(b); // how many time it will the called value will be increased as it is not defining every time 
    return 0;
}
