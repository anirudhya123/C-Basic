/*
Uninitialized pointer into C programme is called wild pointer. It points an arbitrary location into memory causes crash.
Dereferencing can cause nasty bug. Always initialize with some NULL. try to avoid this also.

Basic Syntax 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 152;
    int *ptr; // this is a wild pointer 
    // *ptr = 23; // it saves 23 in an arbitrary memory address.
    ptr = &a; // no longer a wild pointer.
    printf("The Value for a is %d",*ptr);
    return 0;
}
