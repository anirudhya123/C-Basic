/*
We can pass arrays into function in two methods - 1. By declaring array as parameter in function
2. By Delcaring Pointer .
Basic Syntax
*/
#include <stdio.h>
void Arr_Para(int array[])
{ // in this way we can declare array as parameter
    for (int i = 0; i < 5; i++)
    {
        printf("The Value at %d is %d \n ", i, array[i]);
    }
    array[3] = 45; // Chaning the value into the Function
}
void Arr_Pointer(int *array_pointer)
{ // declaring the pointer
    // it will easy to us to handle the concept of array pointer as we have learned it already
    // Way - 1 - simple way
    for (int i = 0; i < 5; i++)
    {
        printf("The Value at %d is %d \n ", i, array_pointer[i]);
    }
    // Way - 2 - Using Dereferencing
    for (int i = 0; i < 5; i++)
    {
        printf("The Value at %d is %d \n ", i, *(array_pointer + i));
    }
    // here also you can change the value
    *(array_pointer + 2) = 78;
}
void Matrix_printer(int matrix[2][5])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    // Array passing as PAra meter.
    int arr[] = {4, 7, 6, 2, 4};
    printf("Value Before calling function  %d \n", arr[3]);
    Arr_Para(arr);                                        // passing an array as an actual argument but if you know this is the base address of the array.
    printf("Value after calling function %d \n", arr[3]); // and change is reflected so if you change values in function of an array it will reflected globally as it takes the address of the Array.
    Arr_Pointer(arr);
    printf(" See the value after the defereferecing %d \n", arr[2]); // the value is changed
    // You can give matrix also as an Parameter.
    int matrix[2][5] = {
        {1, 2, 3, 4, 5}, {7, 8, 9, 4, 5}};
    Matrix_printer(matrix); // as you can see.
    return 0;
}
