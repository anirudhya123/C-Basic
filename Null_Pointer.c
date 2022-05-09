/*
Null pointer used to indicate it doesn't refer to any valid object. We can use to check any pointer having proper 
data or not. We can't dereference it as it points to NULL value. Can be used for error handleing we can pass NULL to 
a pointer where we don't want to pass valid address. NULL macro means ((void*)0) value means NULL == ((void*)0). 
Uninitialized Pointer can have Garbage values but incase of NULL it can have ((void*)0). And it is a value and other 
hand void pointer is a type as int float etc. 

Basic Syntax 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr = NULL;
    // int *ptr = &a;
    if (ptr != NULL){
        printf("The Value of a is %d ", *ptr);
    }
    else{
        printf("It is having a null pointer and can't hold a value to be Dereferenced.");
    }
    return 0;
}
