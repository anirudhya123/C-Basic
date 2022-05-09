/*
Array is one of the most important data structure in C. Used to store Multiple values of same data type. One
dimension array called vector and 2 dimension called matrix.
Why do we need Arrays ?
Code that use arrays managing large no. of same type variables is more organized and readable.
Arrays allow us to create many variables by just a single line. It means there is no need to create or specify each and every variable.
Advantage of Arrays :
It is used to represent multiple data items of same type by using only single name.
Accessing an item in a given array is very fast.
Properties of Array :
Data in an array is stored in contiguous memory locations in RAM.
Each element of an array is of same size i.e. their data types are same so memory consumed by each is also same.
Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.
Index No - It is the special type of no. which allows us to access variables of Arrays i.e. index no. provides a method to access each element of an array in a program.
*/
// Basic Syntax
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Vector
    // initializing or Declaring an array in C language
    int numbers[5];               // here 1st we have to tell type of the array then name and then into square bracket length.
    int students[] = {1, 2, 3, 4}; // we can declare and define one time also
    // numbers[0] = 100;              // or we can define later in address like this
                                   // or we can use for loop
    for (int i = 0; i < 5; i++)
    {
        printf("Give a Number : ");
        scanf("%d", &numbers[i]);
        
    }
    // printf("%d",numbers[0]);
    // also we can use loops to print arrays
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");
    // Matrix
    // in case of vector if you not declare the length of the array it will count but incase of matrix you have to give in 2nd case
    int matrix[][5]= {{1,5,6,3,8},{8,7,45,96,1}};
    printf("%d\n",matrix[0][1]); // it will take 0,1 position
    // you can derive it using array also with double loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n"); // to give a matrix look
        
    }
    printf("\n");
    // same way you can create a matrix
    int mat_2[2][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&mat_2[i][j]);
        }
        printf("\n"); // to give a matrix look
        
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",mat_2[i][j]);
        }
        printf("\n"); // to give a matrix look
        
    }
    
    
    return 0;
}
