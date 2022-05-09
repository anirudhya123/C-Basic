/*While learning python we haven't concern about pointer. So what is pointer? Basically every variable having a location
and we use pointer  in C to save that location although we can save pointer's address into another pointer. let's learn 
some bookish knowledge : 
1. Memory block i.e. variable get some space in RAM and we can think of that as a block.
2. Name of memory block or Variable’s name
3. Content of that block i.e. value in that variable
4. Address of memory block i.e. unique address which allows us to access that variable.

Pointer :

1. Pointer is a variable that contains address of another variable. It means it is a variable but this variable contains address or memory address of any other variable.
2. It can be of type int, char, array, function, or any other pointer.
3. Its size depends on architecture. 2 bytes for 32 bit
4. Pointers in C Language can be declared using *(asterisk symbol).

while taking about pointer we have to know about two more operator one is '&' and another is '*' as we know 1st one 
gives us the address of variable and "*" used to return content of the address you are callling. Let's see some formal 
definition.
Address of Operator (&) :
·      It is a unary operator.

·      Operand must be the name of the variable.

·      & operator gives address no. of variable.

·      & is also known as “Referencing Operator”.

 

Indirection Operator :
·      * is indirection operator.

·      It is also known as “Dereferencing Operator”.

·      It is a unary operator.

·      It takes address as an argument.

·      * returns the content/container whose address is it’s argument. 

Now what is NULL pointer which points nothing in a programme so what will be the usage basically to save the memory 
reuse same memory i know by this you will understand nothing as you will work in C you will understand.
Null Pointer :
1. A pointer that is not assigned any value but NULL is known as NULL pointer.
2. In computer programming NULL pointer is a pointer that does not point to any object, variable or function.
3. We can use it to initialize a pointer variable when that pointer variable isn’t assigned any valid memory address yet.
4. int *ptr = NULL;

Uses of Pointers:
·      Dynamic Memory Allocation

·      Arrays, Functions and Structures

·      Return multiple values from a function

·      Pointer reduces the code and improves the performance
 */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // LEt's see pointer
    int a = 56;
    int* pointer_a = &a; // this will store the address of the a  
    printf("The value for the A is %d \n",a);
    printf("The value for the A is %d \n",*pointer_a); // using star we are dereferencing the pointer_a and will give same output as before
    printf("The Address for the A is %x \n",&a); // this time we are printing the location of a in HExa Decimal
    printf("The Address for the A is %x \n",pointer_a); // this time we are printing the location of a in HExa Decimal
    printf("The Address for A is %p \n",pointer_a); // you can use %x or %p as %p is format specifier for pointer
    // you even can print the address of the pointer to a 
    printf("The Address of Pointer to a is %p \n",&pointer_a);
    // Null pointer :  As we know in C if we initialize a variable in C it takes a garbage value and takes a memory
    // also but if we point it NULL then it will take no memory location after all ao out memory can be saved.
    int *null_p_1; // it is a pointer with no value
    int *null_p_2 = NULL ;  // it also a pointer with none value
    printf("The Address of the Pointer is : %p \n",null_p_1); // it taking some space as you give no value to it
    printf("The Address of the Pointer is : %p \n",null_p_2); // but it is taking no space
    // it is the basic concept for the NULL pointer.
    return 0;
}
