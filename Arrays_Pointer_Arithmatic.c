/*
Pointer Arithmetic - Like Normal Arithmetic Pointer have some arithmetic but here is some difference as we know that
pointer is address of a variable and if we perform normal arithmetic operation on it, will't increase or decrease 
as normal it will increase as memory location means if you add 1000 + 1 in normal case it will show 1001 but in pointer
case it will give very next location of 1000 that according to architecture and data type. Some Operators are for 
Pointer is "+", "-", "++", "--". Although you can't add two address but can subtract. See some Example Below :
Pointers Arithmetic :

We can’t add, multiply or divide two addresses. (Subtraction is possible)
E.g:

int a, b, *p, *q;

&a*&b;                   // Not Possible

&a+&b;                   // Not Possible

p*q;                         // Not Possible

We can’t multiply & divide an address with integer value.
E.g :

&a*5;                      // Not Possible

p/5;                         // Not Possible

We can add or subtract integer to/from an address.
E.g :

int a,b;          // Let’s Suppose &a is 1000

int *p, *q;

p=&a;

q=&b;

p+1;              // It is possible [1000+1 = 1004]

Now you may think why we got 1004 as an output after adding 1 in 1000. So as we know a is an integer. So it’ll take 4 bytes of memory & we know pointer always takes base address, but it access other bytes also by itself only.

So, when we will add 1000+1 then from 1000 to 1003 all address are allocated to int a. So the next block of memory is after 1003 i.e. 1004. So that’s how Pointers arithmetic is done.

To Find arithmetic (+,-) of any pointer :

Pointer + n = pointer + size of (type of pointer)*n

# Let's understand how pointer works with Array : 
Basically you can get address of an array by doing &array[0] but you can do it also array both are same now for next location you can just add one to it 
means &array[1] == array + 1 . Using * operator you can decompose this array also like this. Now how address of array
works same as normal but it takes one after another as we have learnt so locations will be 1000 then 1004 as per my architecture
Let's visualize things with codes.  
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Pointer Arithmetic - i will declare many data type to see byte and architecture difference etc
    int a = 100;
    char b = '5';
    float c = 15.23;
    int *pointer_a = &a;
    char *pointer_b = &b;
    float *pointer_c = &c;
    printf("The Address for A is %d \n",pointer_a); // we are using decimal to show the location for understand increment
    printf("The Address for B is %d \n",pointer_b);
    printf("The Address for C is %d \n",pointer_c);
    printf("The Increased Address for A is %d \n",pointer_a+1); // Now you can see the increments
    printf("The Increased Address for B is %d \n",pointer_b+1);
    printf("The Increased Address for C is %d \n",pointer_c+1); // see for my architecture increments are 4,1,4 hope you have realize the difference between normal.
    pointer_c--;
    pointer_a++;
    printf("%d\n",pointer_c); // see previous one location. same for plus
    printf("%d\n",pointer_a);

    printf("__________________\n");
    // Array And Pointer
    int array[] = {1,3,4,58,64,12,52,12}; 
    printf("Value of 4th Of array is %d \n", array[3]); // simple printing the value
    printf("Address of the 1st element of the array %d \n", &array[0]); // Basic Way
    printf("Address of the 1st element of the array %d \n", array); // New Way and both are same
    printf("Address of the 1st element of the array %d \n", &array[1]); // Basic Way
    printf("Address of the 1st element of the array %d \n", array +1); // See how increment works here

    // Printing Values by doing Dereference
    printf("Value at Address of the 1st element of the array %d \n", *(&array[0])); // Basic Way
    printf("Value at Address of the 1st element of the array %d \n", array[0]); // Basic Way
    printf("Value at Address of the 1st element of the array %d \n", *(array)); // New Way and both are same
    printf("Value at Address of the 1st element of the array %d \n", *(&array[1])); // Basic Way
    printf("Value at Address of the 1st element of the array %d \n", *(array +1)); // See how increment works here

    // Now you can't change the address of any array location by doing pointer arithmetic
    // array++; // it is wrong as the 1st position of the array must be constant but you can store it some where can edit it
    int *array_pointer = array;
    array_pointer++; // this is working but it's not original just a copy
    return 0;
}
