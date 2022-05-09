/*
Void Pointer is a data type less pointer. can be type casted to any type. A general Purpose Pointer.
In dynamic memory allocation it returns a Void pointer as we can change it according to requirement.
We can't directly dereference and use pointer arithmetic.

Basic Syntax
*/
#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 25;
    float b = 5.25;
    void *pointer_;
    int *ptr;
    pointer_ = &a;
    // printf("The value of the a is %d ", *pointer_); // it will show error as it having no datatype
    // So we have typecast the pointer
    printf("The Value of a is %d \n",*((int *)pointer_));
    pointer_ = &b; // we can change the value into it any instance 
    printf("The Value of b is %f \n ",*((float *)pointer_)); // see it is printing the new value

    // Example in Dynamic memory allocation
    ptr - (int *)malloc(3*sizeof(int)); // here this malloc returns a void pointer so we changed into Int.
    return 0;
}
