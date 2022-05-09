/*
Dangling means Hanging.Dangling Pointer pointing to a location whose content has been deleted means it points out a deallocated memory location. Can be asrise during 
Object Destruction here we will discuss three ways can be created so we can avoid it as it is a unwanted bug. 

Causes - 
1. Deallocation of memory
2. Returuing local variables in function calls.
3. Variable going out of scope. 

Problems -
1. Nasty Bug 2. Security Holes 

Solution - 
1. We can make Dangling pointers into NULL pointer.

Basic Syntax
*/
#include<stdio.h>
#include<stdlib.h>
int* function_dangling(){
    int a = 15, b = 13, c ;
    c = a + b;
    return &c;
}
int main(int argc, char const *argv[])
{
    // Case 1 - De allocation of Memory Block 
    int *ptr = (int*) malloc(5*sizeof(int));
    ptr[0] = 1;
    ptr[1] = 11;
    ptr[2] = 111;
    ptr[3] = 1111;
    ptr[3] = 1111;
    free(ptr); // We have Freed the prt memory block so it is a dangling pointer.  

    // Case 2 - Function Returning local variable as an address.
    int *dang_ptr = function_dangling(); // it is also dangling as function having a limited scope and after returning the function data has been destroyed and also the address of the variable our pointer is carrying.

    // Case 3 - if variable goes out of scope. 
    int *dangling_3;
    {
        int a = 15;
        dangling_3 = &a;
    }
    // out of this scope this variable doesn't exist but the pointer with address exists and becomes dangling.
    return 0;
}
