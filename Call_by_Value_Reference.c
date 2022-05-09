/*
Actual and formal Argument - In C programme when a function called into the main and we passed some values into the 
function that is Actual Argument and This argument values directly not accessed by the function as the function takes
a copy from them and that is called the  formal argument .
# Call by Value : 
It is Basically the values of actual arguments copied into the formal argument and so the changes into the variable
into the function Doesn't reflect on real variable . For  Example Till now every time we used function we used 
call by value method.
# Call by Reference : 
Here Instead of copying value formal argument copies the addresses of the actual arguments so into function by 
dereferencing the original values can be affected easily. That is Call by reference. We will use pointer to achieve.
*/
#include<stdio.h>
int avarage(int a, int b){ // here the arguments are Formal argument
    return (a+b)/2;
}
void value_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void reference_swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int a = 12,b=56;
    avarage(a,b); // here it is the actual argument.

    // We will learn difference between this two by same function - Swapping
    value_swap(a,b); // As you can see no values are effected
    printf("The Value of A is %d \n",a);
    printf("The Value of B is %d \n",b);
    reference_swap(&a,&b); // as you can see values are swapped and it is the difference.
    printf("The Value of A is %d \n",a);
    printf("The Value of B is %d \n",b);
    return 0;
}
