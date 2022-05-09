/*
Naturally a variable or an array having constant or static memory. In those cases we can create big memory but the
memory allocation will be at the start of the programme. But we need some thing which will provide us Memory allocation
during Run time. And Dynamic Memory allocation is a way in which the size of a data structure can be changed during the run time.

Difference : 1.  Static Memory Allocation - Allocation Done Before program's execution , no memory reusability , Less Efficient.
2. Dynamic Memory Allocation : Allocation Done during Execution, Memory reusability and Freeding is allowed, More efficient.

# Memory allocation in C programme done in 4 steps -
1. Code - Text Segment . all text code saved in this part.
2. Static/Global variables - 1. Data Segment for Initialized Storage as (int a = 2;) 2. BSS Segment for uninitialized Storage as (int a;)
3. Stack - Used for Static memory allocation. Simple world Last in First out Data structure . Future you will read in details.
4. Heap - Using Heap is Dynamic Memory Allocation. Heap grows opposite of stack. When they met called stack over flow. to use heap we have to use malloc() , calloc() functions etc.
 # Stack Over Flow : Complier allocates some part of memory for the Stack. When the space got exhausted for some bad reason . example as recursion with wrong base condition.

** Write in terminal size any C.exe file to know memory allocation**

// Functions for Dynamic Memory allocation -
malloc - means memory allocation. it alllocates memory in bytes. Returns a void pointer as you can type cast easily. if fails returns NULL pointer. Memories are initialzed by Garbage values default.
calloc - almost same just it initialize all the memory by 0.
realloc - used to re allocate or increase size of pre allocated array in run time.
free - as we have learned the big problem of heap is we have to clean every time otherwise an used memory will be take memory
which will create stack over flow so we have to free un used heap .

// Basic Syntax - this heap functions locates in stdlib.h so we have to include it .
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // Malloc -
    // printf("Malloc \n");
    // int* ptr; // initializing a pointer to save address
    // ptr = (int*) malloc(3*sizeof(int)); // in pointer we saved 10 times int space and takes as integer space.
    // // pointer_variable = (pointer_datatype) malloc (n * sizeof(data_type)) // core syntax for malloc.
    // // You can use loop to write and print the dynamic array
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("The value of %d is : \n",i);
    //     scanf("%d",&ptr[i]); // we can write in this way as we know.
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("The value for the %d is %d\n",i,ptr[i]);
    // } // if you doesn't give value it will print garbage value
    printf("Calloc \n");
    int *ptr;                            // initializing a pointer to save address
    ptr = (int *)calloc(3, sizeof(int)); // in pointer we saved 10 times int space and takes as integer space.
    // pointer_variable = (pointer_datatype) malloc (n , sizeof(data_type)) // core syntax for malloc.
    // You can use loop to write and print the dynamic array
    for (int i = 0; i < 2; i++)
    {
        printf("The value of %d is : \n", i);
        scanf("%d", &ptr[i]); // we can write in this way as we know.
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value for the %d is %d\n", i, ptr[i]);
    } // if you doesn't give value it will print zero
    printf("Realloc \n");
    // int* ptr; // initializing a pointer to save address
    ptr = (int *)realloc(ptr, 5 * sizeof(int)); // in pointer we saved 10 times int space and takes as integer space.
    // pointer_variable = (pointer_datatype) malloc (exist_pointer ,n*sizeof(data_type)) // core syntax for malloc.
    // You can use loop to write and print the dynamic array
    for (int i = 0; i < 5; i++)
    {
        printf("The new value of %d is : \n", i);
        scanf("%d", &ptr[i]); // we can write in this way as we know.
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The new value for the %d is %d\n", i, ptr[i]);
    } // it will increase the number of spaces.


    // finally after completing your work you must have to free memory
    free(ptr); 
    return 0;
}
