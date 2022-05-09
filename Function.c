/*
As C is a procedural language function is most important thing to shorten and increase readabilty of a code. We have to declare define and finally call it to get output. Two types of Function as pre-defined or library function and User define function. It may have argument or return value may have both or not let's see how we can write function in C.
*/
// Basic Syntax
#include <stdio.h>
// Type - 1 - Both Argument and Return Value
int avarage(int a, int b)
{
    return (a + b)/2; // as we know we have to provide return type.
}
// Type - 2 - Return Null and Argument yes
void starPrinter(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
    
}
// type - 3 - Return True Argument False
int ageDetector(){
    int a;
    printf("What is your age : ");
    scanf("%d",&a);
    return a;
}
// type - 4 - Both False
void sigNature(){
    printf("My name is Anirudhya Das.");
}
int main(int argc, char const *argv[])
{
    int a, b, c,d;
    a = 15;
    b = 2;
    c = avarage(a, b);
    printf("The Avarage of Two Number is : %d", c);
    starPrinter(c);
    d = ageDetector();
    printf("Your Age Should be %d \n",d);
    sigNature();
    return 0;
}
